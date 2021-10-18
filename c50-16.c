#include<stdio.h>
int main(){
int n,i,mon,sum,a,b,c,d,e,f;
sum=0;
    while(~scanf("%d",&n)){
	    for(i=1;i<=n;i++){
		    scanf("%d",&mon);
		    a=mon/100;
		    sum+=a;
		    b=(mon-a*100)/50;
		    sum+=b;
		    c=(mon-a*100-b*50)/10;
		    sum+=c;
		    d=(mon-a*100-b*50-c*10)/5;
		    sum+=d;
		    e=(mon-a*100-b*50-c*10-d*5)/2;
		    sum+=e;
		    f=mon-a*100-b*50-c*10-d*5-e*2;
		    sum+=f;
	    }
   printf("%d",sum);
   sum=0;
    }

return 0;
}
