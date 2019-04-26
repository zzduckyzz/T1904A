#include <stdio.h>
int main()
{
	int x;
	printf("x=\n");
	scanf("%d" , &x);
	switch (x)
	{
		case 2:printf("hnay la thu 2\n");break;
		case 3:printf("hnay la thu 3\n");break;
		case 4:printf("hnay la thu 4\n");break;
		case 5:printf("hnay la thu 5\n");break;
		case 6:printf("hnay la thu 6\n");break;
		case 7:printf("hnay la thu 7\n");break;
		case 8:printf("hnay la chu nhat\n");break;
		default:printf("khong phai ngay trong tuan");break;
		return 0;
	}
}
