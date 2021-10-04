#include <stdio.h>
int main(){
	float foot,inch,height;
	printf("«Î ‰»Î”¢≥ﬂ∫Õ”¢¥Á:");
	scanf("%f %f",&foot,&inch);
	height=(foot+inch/12)*0.3048;
	printf("%f",height);
	return 0;
}
