#include <stdio.h>
int main(){
	float a,b,c;
	printf("nhap a:\n");
	scanf("%f",&a);
	printf("nhap b:\n");
	scanf("%f",&b);
	printf("nhap c:\n");
	scanf("%f",&c);
	if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){		
		printf("abc la 3 canh tam giac vuong\n");
	}
	else{
		printf("abc k phai la 3 canh tam giac vuong\n");
	}
	}
