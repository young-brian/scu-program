#include <stdio.h>
int main(){
   float price;
   float money;
   float change;
   printf("请输入价格：\n");
   scanf("%f",&price);
   printf("请输入付款金额:\n");
   scanf("%f",&money);
   change=money-price;
   printf("找零:%.2f",change);//为什么保留两位答案就是对的，保留六位答案就是错的 
   return 0;
}
 
