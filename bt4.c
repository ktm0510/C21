#include <stdio.h>

int main ()
{
    int a[1000], i, min, max, n, k;
    printf("Nhap so phan tu\n");
    scanf("%d", &n);
    for (i = 0; i < n  ; i ++)
        scanf("%d", &a[i]);
    max = a[0]; min = a[0];
    for (i = 0; i < n - 1; i ++)
    {
        if (a[i] < a[i + 1])
        {
            max = a[i + 1];
        }
        else
        {
            k = a[i + 1];
            a[i + 1] = a[i];
            a[i] = k;
        }
    }
    for (i = 0; i < n - 1; i ++)
    {
        if (a[i] > a[i + 1])
        {
            min = a[i + 1];
        }
        else
        {
            k = a[i + 1];
            a[i + 1] = a[i];
            a[i] = k;
        }
    }
    printf("Min = %d\nMax = %d", min, max);
    return 0;
}
