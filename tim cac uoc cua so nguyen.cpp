#include <stdio.h>
int main(){
	int i,I,us;
	printf("nhap so nguyen\n");
	scanf("%d",&I);
	
	for(i=1;i<=I;i++)
		if(I%i==0){
			printf("%d",i);
			us++;
			}
	
return 0;
}
	
