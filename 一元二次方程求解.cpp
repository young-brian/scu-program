#include <stdio.h>
#include <math.h>
int main(){
	float x1,x2;
	float y,a,b,c;
	printf("请输入系数:");
	scanf("%f,%f,%f,%f",&y,&a,&b,&c);
	c=c-y;
	float temp=sqrt(b*b-4*a*c);
	x1=(-b+temp)/(2*a);
	x2=(-b-temp)/(2*a);
	printf("一元二次方程的根是:\n");
	printf("%f\n",x1);
	printf("%f",x2);
	return 0;

}
