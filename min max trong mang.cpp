#include <stdio.h>
int main(){
	int arr[10];
	for (int i=0;i<10;++i)
	{printf("nhap so thu %d\n",i);
	scanf("%d",&arr[i]);
	}
	for (int i=0;i<10;++i)
	{int max,min;
		for (int i=0 ; i<10; ++i)
		{
			if(arr[i]>max)
			max = arr[i];
			if(min>arr[i])
			min = arr[i];
			
		}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	}
	
	return 0;
}
