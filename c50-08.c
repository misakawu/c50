#include <stdio.h>
int main(){
int x[1001],i,n;
x[2]=2;
x[3]=2;
x[4]=6;

while(~scanf("%d",&n)){


if(n==0)
    break;

for(i=5;i<=n;i++){
x[i]=(2*x[i-2]+x[i-1]);
}

printf("%d\n",x[n]);
}

return 0;
}
