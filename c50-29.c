#include<stdio.h>
int main(){
int a,b;	
while(~scanf("%X %X",&a,&b)){
	if(a+b>=0)
		printf("%X",a+b);
        if(a+b<0)
		printf("-%X",-(a+b));
}
return 0;
}	
