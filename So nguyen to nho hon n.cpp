#include <stdio.h>
#include <math.h>
int nguyento(int n)
{
    int i;
    for (i = 2; i <= n; i++)
        if (n % i == 0 and n != i)
        {
            return 1;
            break;
        }
}
int main()
{
    int i, n, kt;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    printf("\nCac so nguyen to nho hon n la: ");
    for (i = 2; i <= n; i++)
        if (nguyento(i) != 1)
            printf("%d ", i);
    return 0;
}
