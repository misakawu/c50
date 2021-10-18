#include <stdio.h>
int main(){
	int n,a,i,ans=1;


while(~scanf("%d",&n)){

	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if(a%2!=0)
			ans*=a;
}
printf("%d\n",ans);
ans=1;
}
return 0;
}
