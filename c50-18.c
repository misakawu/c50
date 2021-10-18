#include <stdio.h>
int main(){
int n,i,j,tem;
int a[10001]={0};    
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
//排序
for(i=0;i<n-1;i++){
	for(j=0;j<n-i;j++){
		if(a[j]>a[j+1]){
			tem=a[j];
			a[j]=a[j+1];
			a[j+1]=tem;
		}
	}
}
//计算
double b;
b=a[0];
for(i=0;i<n;i++){
	b=(a[i]+b)/2;
}
printf("%d",(int)b);

return 0;	
}
