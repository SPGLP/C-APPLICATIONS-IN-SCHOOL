#include<stdio.h>

int main(){
	int n;
	int a,b,c,d;
	printf("输入一个四位数字");
	scanf("%d",&n);
	a = n % 10;
	b = (n/10) % 10;
	c = (n/100) % 10;
	d = (n/1000) % 10;
	printf("个位：%d\n",a);
	printf("十位：%d\n",b);
	printf("百位：%d\n",c);
	printf("千位：%d\n",d);
	return 0;
}
