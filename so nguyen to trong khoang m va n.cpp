#include <stdio.h>
int isPrime(int m, int n){
	for(int i =m; i<=n; i++){
 		int count = 0;
 		for(int j=2;j<i;j++){
 			if(i%j==0){
 				count++;
			 }
		 }
		 if(count == 0){
		 	printf("%d\n",i);
		 }
	 }
}


int main(){
 	int m,n;
 	printf("nhap m:\n");
	while(m <= 1){
 		scanf("%d",&m);}
 	printf("nhap n:\n");
 	while(n<m){
 		scanf("%d",&n);
	 }
	isPrime(m , n);
	return 0;
 }
 

