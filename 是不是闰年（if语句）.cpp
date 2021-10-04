#include <stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	if (year%4==0 && year%100!=0||year%400==0)
	printf("%d年就是闰年\n",year);
else 
	printf("%d年不是闰年",year);
	return 0;
}
