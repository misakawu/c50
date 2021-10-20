#include<stdio.h>
int main(){
int n,i,t,min=-1,count=0;
scanf("%d",&n);

for(i=1;i<=n;i++){
	t=i/2+i/3+i/5;
	if(t>min)
		count++;
	min=t;
}
printf("%d",count);
	
return 0;
}
