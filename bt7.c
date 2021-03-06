#include <stdio.h>

int main ()
{
    int a[1000], i, j, n, k;
    printf("Nhap do dai day so ");
    scanf("%d", &n);
    printf("Nhap day so \n");
    for (i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i ++)
    {
        for (j = 0; j < n - 1; j ++)
        {
            if (a[j] > a[j + 1])
            {
                k = a[j + 1];
                a[j + 1] = a[j];
                a[j] = k;
            }
        }
    }
    printf("Day so theo thu tu tang dan la: ");
    for (i = 0; i < n; i ++)
        printf("%d_", a[i]);
}
