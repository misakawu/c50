#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
for(i=1;i<=(n/100);i++){
	printf("B");
}
for(i=1;i<=(n/10)%10;i++){
	printf("S");
}
for(i=1;i<=(n%10);i++){
	printf("%d",i);
}

return 0;
}
