#include <stdio.h>
int main(){
	int h1,m1,h2,m2;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    int ih,im;
    ih=h1-h2;
    im=m1-m2;
    if (im<0){//如果（），那么{这么做}  
    im=im+60;
    ih--; 
	}
	printf("%d %d",ih,im);




return 0;
}

