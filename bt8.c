#include <stdio.h>

int sort(int *b, int n, int num)
{
    int max, i, N, a[1000];
    for (i = 0; i < n; i ++)
        a[i] = b[i];
    max = a[num];
    for (i = num; i < n - 1; i ++)
    {
        if (a[i] <= a[i + 1])
        {
            max = a[i + 1];
        }
        else
        {
            N = a[i + 1];
            a[i + 1] = a[i];
            a[i] = N;
        }
    }

        for (i = num; i < n; i ++)
    {
        if (b[i] == max)
            N = i;
    }
    return N;
}
int main ()
{
    int a[1000], i, n, k, x;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu\n");
    for (i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i ++)
    {
        k = sort(a, n, i);
        x = a[i];
        a[i] = a[k];
        a[k] = x;
    }
    for (i = 0; i < n; i ++)
        printf("%d_", a[i]);
    return 0;
}
