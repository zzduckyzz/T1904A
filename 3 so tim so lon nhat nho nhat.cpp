#include <stdio.h>
int main()
{	
	int a,b,c,max,min;
	printf("nhap a , b va c\n");
	scanf("%d %d %d", &a , &b , &c);
	max = a;
	min = a;
	if (max <= b){
		max = b;
	}
	if (max <= c){
		max = c;
	}
	if (min >= b){
		min = b;
	}
	if (min >=c){
		min = c;
	}
	ptintf("max = %d, min = %d",max , min);
	return 0;
}
