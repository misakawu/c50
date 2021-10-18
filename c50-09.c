#include <stdio.h>
int main(){
int a,b,i,t;
    scanf("%d %d",&a,&b);

if(a<b){
t=a;b=t;
}

if(a%b==0){
printf("%d",a);
}else{ 
for(i=a; i>0; i++)
        if(i%b==0 && i%a==0)
        {
            printf("%d",i);
            break;
        }
}
return 0;
}
