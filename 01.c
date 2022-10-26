#include<stdio.h>

void M1(){
    char S;
    int num;
    int a,b,c,d;
A:
    printf("请输入一个五位数 ");
    scanf("%d",&num);
    a = num / 10000;    	 //万位
    b = num / 1000 % 10;     //千位
    c = num % 100 / 10;      //十位
    d = num %10;        	 //个位
    if(a == d && b == c) 
        printf("此为回文数\n");
    else 
        printf("这不是回文数\n");
    printf("\n好玩吗，还想再玩一次吗? [输入 Y 再来一次] \n");
    scanf("%s",&S);
    if(S == 'Y'){
	    printf("\n");
	    printf("\n");
	    printf("\n");
        goto A;
    }
}

void M2(){
	int T;
	char S;
    long num[113];
    int a[113],b[113],c[113],d[113];
	int i,j;
B:
	printf("你想输入多少个数呢（1 ~ 114） ");
	scanf("%d",&T);
	for(i = 0;i <= T - 1;i++){
    printf("\n请输入第 %d 个五位数 ",i + 1);
    scanf("%d",&num[i]);
    a[i] = num[i] / 10000;    		//万位
    b[i] = num[i] / 1000 % 10;     //千位
    c[i] = num[i] % 100 / 10;      //十位
    d[i] = num[i] % 10;        	//个位
	}
	for(j = 0;j <= T - 1;j++){
    if(a[j] == d[j] && b[j] == c[j]) 
        printf("\n%d 是回文数\n",num[j]);
    else 
        printf("\n%d 不是回文数\n",num[j]);
	}
    printf("\n好玩吗，还想再玩一次吗? [输入 Y 再来一次] \n");
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
    printf("请选择模式\n");
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
