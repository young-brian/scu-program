#include <stdio.h>
int main(){
	int cm,foot,inch;
	scanf("%d",&cm);
    foot=cm/30.48;
    inch=((cm/30.48)-foot)*12 ;//cm虽然是整数，但30.48是浮点数，所以cm/30.48就是浮点数 
	printf("%d %d",foot,inch);
    return 0;
}

