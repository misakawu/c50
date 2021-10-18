#include<stdio.h>
int main(){
int n,team,num,score;
int max=0,tem=0;
int sco[1001]={0};
scanf("%d",&n);

while(n--){
	scanf("%d-%d %d",&team,&num,&score);
	sco[team]+=score;
	if(sco[team]>max){
		max=sco[team];
		tem=team;
	}
}
printf("%d %d",tem,sco[team]);
return 0;
}
