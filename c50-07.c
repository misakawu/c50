#include <stdio.h>
int main(){
	int n,i,a[100],c,min;
	while(~scanf("%d",&n)){
	  for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	  min=a[0];
	  for(i=1;i<n;i++){
	      if(min>a[i]){
			  min=a[i];
			  c=i;
		  }
	  }
		  if(min!=a[0]){
			  a[c]=a[0];
			  a[0]=min;
		  }
		  for(i=0;i<n;i++){
			  if(i==n-1)
			  printf("%d\n",a[i]);
			  else 
				  printf("%d ",a[i]);
		  }
		  if(n==0)
			break;
	}
	return 0;
}


