#include<stdio.h>
int main(){
int S1,G1,K1,S2,G2,K2;
int P,A,ch,aS,aG,aK;
scanf("%d.%d.%d %d.%d.%d",&G1,&S1,&K1,&G2,&S2,&K2);
P=17*29*G1+29*S1+K1;A=17*29*G2+29*S2+K2;
ch=A-P;
if(ch==0){
printf("0.0.0");
}else if(ch>0){
	aG=ch/(17*29);ch=ch%(17*29);
	aS=ch/29;ch%=29;
	aK=ch;
	printf("%d.%d.%d",aG,aS,aK);
}else{
	ch=-ch;
	aG=ch/(17*29);ch=ch%(17*29);
        aS=ch/29;ch%=29;
        aK=ch;
	printf("-%d.%d.%d",aG,aS,aK);
}

return 0;
}
