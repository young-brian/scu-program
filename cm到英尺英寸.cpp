#include <stdio.h>
int main(){
	int cm,foot,inch;
	scanf("%d",&cm);
    foot=cm/30.48;
    inch=((cm/30.48)-foot)*12 ;//cm��Ȼ����������30.48�Ǹ�����������cm/30.48���Ǹ����� 
	printf("%d %d",foot,inch);
    return 0;
}

