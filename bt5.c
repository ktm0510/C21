#include <stdio.h>

int main ()
{
    int a[100], i, n;
    float S = 0, A;
    printf("Nhap so phan tu\n");
    scanf("%d", &n);
    for (i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i ++)
        S = S + a[i];
    A = (S / n);
    printf("Tong cua day so la: S = %.2f\n", S);
    printf("Gia tri trung binh cua day so la A = %.2f", A);
    return 0;
}
