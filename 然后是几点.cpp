#include <stdio.h>
int main(){
   int start,time,a,b,c;
   scanf("%d %d",&start,&time);
   int now;
   a=start/100;
   b=start%100;
   c=a*60+b+time;
   now=(c/60)*100+c%60;
   printf("%d",now);
	return 0;
}
