#include <stdio.h>
int main (){
int n,m,j,i;	
scanf("%d %d",&n,&m);
int a[n][n];

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}

int max,min,sum,ron;
int SUM[n];
for(i=0;i<n;i++){
	sum=0;
	ron=0;
	max=0;
	min=m+1;
        for(j=1;j<n;j++){
		if(a[i][j]>=0&&a[i][j]<=m){
		ron++;
		if(max<a[i][j])
			max=a[i][j];
		if(min>a[i][j])
			min=a[i][j];
		sum+=a[i][j];
	        }
	}
sum=sum-min-max;
SUM[i]=(sum/(ron-2)+a[i][0]+1)/2;
}

for(i=0;i<n;i++){
printf("%d\n",SUM[i]);
}

return 0;
}
