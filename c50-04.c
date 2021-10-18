#include <stdio.h>
int main(){

int a,count;
count=0;
scanf("%d",&a);
while(a>1){
if (a%2==1){
a=(a*3+1);
}else{
a/=2;
}
count++;
}
printf("%d",count);
return 0;
}
