#include <stdio.h>
int main(){

int a,b;
scanf("%d %d",&a,&b);	

if (a<=100&&a>= 0){
	if(b<=100 &&b>=0){
switch(a > 60 && b > 60){
	case 0: printf("it is not pass");break;
	case 1: printf("it is pass");
	}
}else{
	printf ("it is error"); 
}
}else{
	printf ("it is error"); 
}
return 0;
}
