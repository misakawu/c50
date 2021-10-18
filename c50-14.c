#include<stdio.h>
int main(){
int n,m,i,j;
double a,max;
max=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%lf",&a);
		if(a>max)
			max=a;
	}
	printf("%.2f",max);
}

return 0;
}
