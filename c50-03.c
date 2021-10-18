#include <stdio.h>
int main(){

int a,b,c;

scanf("%d %d",&a,&b);

if(a % b != 0){
   c = a % b;
    
    while (c!=0){
    a=b; b=c; c=a%b;
    }
     printf ("%d",(a<b) ? a : b);
} else {

printf("%d",(a<b) ? a : b);
}
return 0;
}
