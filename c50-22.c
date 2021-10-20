#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);

int id,x,y,l;	
int max,min,firid,lasid;
for(i=0;i<n;i++){
	scanf("%d %d %d",&id,&x,&y);
	l=x*x+y*y;
	if(i==0){
	max=l;min=l;firid=id;lasid=id;
	}else{
		if(l>max){
			max=l;
			lasid=id;
		}
		if(l<min){
			min=l;
			firid=id;
		}
	}

}

printf("%04d %04d",firid,lasid);

return 0;
}
