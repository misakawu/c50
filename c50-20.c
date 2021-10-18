#include<stdio.h>
int main(){
int n,i,j;
char a[3];
scanf("%d",&n);

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	scanf("%s",&a[j]);
	if(a[2] == 'T'){
		switch (a[0])
		{
			case 'A' :printf("1");break;
			case 'B' :printf("2");break;
			case 'C' :printf("3");break;
			case 'D' :printf("4");break;	 
		}
	}
        }
}
return 0;	
}
