#include<stdio.h>
int main(){
int n,a,b,c,d,i,x=0,y=0;

scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d %d %d %d",&a,&b,&c,&d);
if(b==a+c&&d!=a+c){
	x++;
}
if(d==a+c&&b!=a+c){
	y++;
}
}
printf("%d %d",x,y);

return 0;
}
