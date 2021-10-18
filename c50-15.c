#include<stdio.h>
int main(){
int N,M,i,j;
scanf("%d %d",&N,&M);
int score[M],ans[M],stu_ans[N],stu_score[M];

for(i=0;i<M;i++){//分数
	scanf("%d",&score[i]);
}
for(i=0;i<M;i++){//答案
	scanf("%d",&ans[i]);
}

for(i=0;i<N;i++){//学生答案
	stu_score[i]=0;
	for(j=0;j<M;j++){
		scanf("%d",&stu_ans[j]);
	if(ans[j]==stu_ans[j]){
	stu_score[i]+=score[j];
	}
}
}

for(i=0;i<N;i++){
printf("%d\n",stu_score[i]);
}
return 0;
}
