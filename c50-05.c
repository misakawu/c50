#include <stdio.h>
int main(){

int n,a[3],b[3],c[3],i;
	scanf("%d",&n);
for(i=1;i<=n;i++){

	scanf("%d %d %d",&a[i],&b[i],&c[i]);
}
for(i=1;i<=n;i++){
	if(a[i]+b[i]>c[i])
		printf("Case #X: true\n");
	else
		printf("Case #X: false\n");
}

return 0;
}
