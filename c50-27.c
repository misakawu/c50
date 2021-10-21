#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
char num[n][12],tem[n][6];

for(i=0;i<n;i++)
	scanf("%s",num[i]);

for(i=0;i<n;i++){
	for(j=0;j<5;j++){
		tem[i][j]=num[i][j+6];
	}
	tem[i][j+1]='\0';
}
for(i=0;i<n;i++)
	printf("6%s\n",tem[i]);
return 0;
}
