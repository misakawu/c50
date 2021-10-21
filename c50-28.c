#include<stdio.h>
int main(){
int n,i,x,y;
scanf("%d",n);
for (i=o;i<n;i++){
	scanf("%c %d"，&x,&y);
	if(x>='a&&x<='z')
		printf("%d\n",-1*(x-97+1)+y)；
	if(x>='A'&&x<='Z')
		printf("%d\n",(x-65+1)+y);
}

return 0;
}
