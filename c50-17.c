#include<stdio.h>
int main(){
int n,i,id,sco,max,k,a[11000];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&id,&sco);
	a[id]+=sco;
}


for(int i=1;i<=n;i++){
        if(a[i]>max){
		k=i;
                max=a[i];
	}
}
printf("%d %d\n",k,max);


return 0;
}
