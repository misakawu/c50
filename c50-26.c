#include<stdio.h>
int main(){
char tem[1000],word[1000][1000];
int n=0,i,j,a,b,s;
while ((s = getchar()) != '#'){
	tem[n] = s;
	n++;
}
for(i=0;i<=n;i++){
	while(tem[i]!=' '&&tem[i]!='\0'){
		word[a][b]=tem[i];
		i++;
		b++;
	}
	word[a][b]='\0';
	a++;
	b=0;
}

int sum=0,x=0;
for(i=0;i<a;i++){
	for(j=i+1;j<a;j++){
	if(word[i]==word[j])
		x=1;
	}
	if(x!=1)
                sum++;
}
printf("%d",sum);

return 0;
}
