#include <stdio.h>
int main(){
	int score,f;
	scanf("%d",&score);
	f=score/10; 
	switch(f){
		case 10:
			printf("A");
			break;
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
			break;
	}
	return 0;
}
