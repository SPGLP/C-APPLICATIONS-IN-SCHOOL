#include<stdio.h>

void M1(){
	char  S; 
	double w;	//���� 
	double p;	//����
A:
	printf("����������(��λ����Ԫ����");
	scanf("%lf",&w);
	if(w < 10)
		p = w * 0.1;
	else if(w > 10 && w <= 20)
		p = 10 * 0.1 + (w - 10) * 0.75;
	else if(w > 20 && w <= 40)
		p = 10 * 0.1 + 10 * 0.75 + (w - 20) * 0.5; 
	else if(w > 40 && w <= 60)
		p = 10 * 0.1 + 10 * 0.75 + 20 * 0.5 + (w - 40) * 0.3; 
	else if(w > 60 && w <= 100)
		p = 10 * 0.1 + 10 * 0.75 + 20 * 0.5 + 20 * 0.3 + (w - 60) * 0.15;
	else
		p = 10 * 0.1 + 10 * 0.75 + 20 * 0.5 + 20 * 0.3 + 40 * 0.15 + (w - 100) * 0.01;
	printf("Ӧ������%lf ��Ԫ",p);
	printf("\n�����𣬻�������һ����? [���� Y ����һ��] \n");
    scanf("%s",&S);
	    if(S == 'Y'){
		    printf("\n");
		    printf("\n");
		    printf("\n");
	        goto A;
	    }
	}
void M2(){
	char  S;
	int T;
	double w[113];	//���� 
	double p[113];	//����
	int i,j;
B:
	printf("������������������أ���1 ~ 114��");
	scanf("%d",&T);
	for(i = 0;i <= T - 1;i++){
	printf("������� %d ������(��λ����Ԫ����",i + 1);
	scanf("%lf",&w[i]);
	if(w[i] < 10)
		p[i] = w[i] * 0.1;
	else if(w[i] > 10 && w[i] <= 20)
		p[i] = 10 * 0.1 + (w[i] - 10) * 0.75;
	else if(w[i] > 20 && w[i] <= 40)
		p[i] = 10 * 0.1 + 10 * 0.75 + (w[i] - 20) * 0.5; 
	else if(w[i] > 40 && w[i] <= 60)
		p[i] = 10 * 0.1 + 10 * 0.75 + 20 * 0.5 + (w[i] - 40) * 0.3; 
	else if(w[i] > 60 && w[i] <= 100)
		p[i] = 10 * 0.1 + 10 * 0.75 + 20 * 0.5 + 20 * 0.3 + (w[i] - 60) * 0.15;
	else
		p[i] = 10 * 0.1 + 10 * 0.75 + 20 * 0.5 + 20 * 0.3 + 40 * 0.15 + (w[i] - 100) * 0.01;
	}
	for(j = 0;j <= T - 1;j++){
		printf("\n�� %d ��Ӧ������%lf ��Ԫ\n",j + 1,p[j]);
		
	}
	printf("\n�����𣬻�������һ����? [���� Y ����һ��] \n");
	scanf("%s",&S);
	if(S == 'Y'){
		printf("\n");
		printf("\n");
		printf("\n");
	    goto B;
	}
}
int main(){
	int m;
    printf("made by LSL\n");
    printf("\n");
    printf("��ѡ��ģʽ\n");
    printf("1 - ��ͨģʽ\n");
    printf("2 - ����ģʽ\n");
    scanf("%d",&m);
    if(m == 1){
        M1();
    } else {
        M2();
    }
    return 0;
}
