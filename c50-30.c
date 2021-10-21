#include<stdio.h>
int main(){
int n,a,b,i;
scanf("%d",&n);
int num[n][2];

for(i=0;i<n;i++){
scanf("%d %d",&num[i][0],&num[i][1]);
}

for(i=0;i<n;i++){
a=(num[i][0]+num[i][1])/2;

if(num[i][0]>num[i][1])
	b=(num[i][0]-num[i][1])/2;
if(num[i][0]<num[i][1])
	b=(num[i][0]-num[i][1])/2;

if(num[i][0]<num[i][1]){
	printf("impossible\n");
}else{
	if(a>b)
        printf("%d %d\n",a,b);
	if(b>a)
	printf("%d %d\n",a,b);
}


}
return 0;
}
