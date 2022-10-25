#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c;
	double CS,SS;
	printf("请输入三角形三边长(整数)，用空格隔开：");
	scanf("%lf %lf %lf",&a,&b,&c);
	CS = a + b + c;
	printf("三角形周长：%lf\n",CS);
	SS = sqrt(CS/2 * (CS/2 - a) * (CS/2 - b) * (CS/2 - c));
	printf("三角形面积：%lf\n",SS);
	return 0;
}
