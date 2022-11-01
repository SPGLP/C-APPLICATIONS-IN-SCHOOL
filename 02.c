#include<stdio.h>

void M1(){
	char  S; 
	double w;	//收益 
	double p;	//佣金
	int again;
	while(again){
		printf("请输入收益：");
		scanf("%lf",&w);
		if(w < 10){
			p = w * 0.1;
		}
		else if(w > 10 && w <= 20){
			p = 10 * 0.1 + (w - 10) * 0.075;
		}
		else if(w > 20 && w <= 40){
			p = 10 * 0.1 + 10 * 0.075 + (w - 20) * 0.05; 
		}
		else if(w > 40 && w <= 60){
			p = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (w - 40) * 0.03; 
		}
		else if(w > 60 && w <= 100){
			p = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (w - 60) * 0.015;
		}
		else{
			p = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (w - 100) * 0.001;
		}
		printf("所产生的佣金 %lf \n",p);
		printf("\n想再玩一次？ [输入 Y 再来一次 \n");
		scanf("%s",&S);
		if(S == 'Y' || S == 'y'){
			printf("\n");
			printf("\n");
			printf("\n");
			again = 1;
		} else {
			again = 0;
		}
	}
}
void M2(){
	char  S;
	int T;
	double w[113];	//收益
	double p[113];	//佣金
	int i,j;
	int again;
	while(again){
	printf("你想要输入多少组数据呢？（1 ~ 114）：");
	scanf("%d",&T);
	for(i = 0;i <= T - 1;i++){
		printf("请输入第 %d 组数据：",i + 1);
		scanf("%lf",&w[i]);
		if(w[i] < 10){
			p[i] = w[i] * 0.1;
		}
		else if(w[i] > 10 && w[i] <= 20){
			p[i] = 10 * 0.1 + (w[i] - 10) * 0.075;
		}
		else if(w[i] > 20 && w[i] <= 40){
			p[i] = 10 * 0.1 + 10 * 0.075 + (w[i] - 20) * 0.05; 
		}
		else if(w[i] > 40 && w[i] <= 60){
			p[i] = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (w[i] - 40) * 0.03;
		} 
		else if(w[i] > 60 && w[i] <= 100){
			p[i] = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (w[i] - 60) * 0.015;
		}
		else{
			p[i] = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (w[i] - 100) * 0.001;
		}
	}
	for(j = 0;j <= T - 1;j++){
		printf("\n第 %d 组数据的佣金为 %lf \n",j + 1,p[j]);
		
	}
	printf("\n想再玩一次？ [输入 Y 再来一次 \n");
		scanf("%s",&S);
		if(S == 'Y' || S == 'y'){
			printf("\n");
			printf("\n");
			printf("\n");
			again = 1;
		} else {
			again = 0;
		}
	}
}
int main(){
	int m;
    printf("made by LSL\n");
    printf("\n");
    printf("请输入数字选择模式\n");
    printf("1 - 普通模式\n");
    printf("2 - 超级模式\n");
    scanf("%d",&m);
    if(m == 1){
        M1();
    } else {
        M2();
    }
    return 0;
}
