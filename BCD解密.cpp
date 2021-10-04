#include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);//一定记得读入时的地址符 
	b=a/16*10+a%16;
	printf("%d",b);
    return 0;
}

