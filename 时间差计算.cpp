#include <stdio.h>
int main(){
	int hour1,min1,t1;
	int hour2,min2,t2;
	printf("请输入h1,min1:");
	scanf("%d %d",&hour1,&min1);
	printf("请输入h2,min2:");
	scanf("%d %d",&hour2,&min2);
	t1=hour1*60+min1;
	t2=hour2*60+min2;
	printf("两者时间差为%d小时%d分",(t1-t2)/60,(t1-t2)%60);
	
	
	
	
	
	
	
	return 0;
}


