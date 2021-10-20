#include<stdio.h>
int main(){
int n,i;
int a=0,b,sum
while(scanf("%d",&n)&&n!=0){
	for(i=0;i<n;i++){
		scanf("%d",b);
		if (a==b)
			sum += 5;
		if (a>b)
			sum = sum+(b-a)*6+5;
		if (a<b)
			sum = sum+(a-b)*4+5;
		a = b;
	}
	printf("%d\n",sum)
}

return 0;
}
