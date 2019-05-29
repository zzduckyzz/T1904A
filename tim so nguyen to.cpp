#include <stdio.h>

int isPrime(int n){
	if(n<2){
		printf("%d khong phai la so nguyen to\n");
	}
	int count = 0;
	for(int i = 2; i< n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count == 0){
		printf("%d la so nguyen to",n);
	}
	else{
		printf("%d k la so nguyen to",n);
	}
}
int main(){
	int n;
	printf("nhap 1 so: \n");
	scanf("%d",&n);
	isPrime(n);
	return 0;
}
