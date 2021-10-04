#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  int b,c,d,f;
  b=a/100;
  c=a/10-b*10;//a/10%10
  d=a-b*100-c*10;
  f=d*100+c*10+b;//f=a%10
  printf("%d",f);
return 0;
}

