#include <stdio.h>

int main ()
{
    int k, m, d1 = 0, d2 = 0, d5 = 0 ,d10 = 0;
    scanf("%d", &k);
    m = k;
    d10 = k / 10;   k = k % 10;
    d5 = k / 5;     k = k % 5;
    d2 = k / 2;     k = k % 2;
    d1 = k;
    printf("Voi so tien la %d$, ta can it nhat %d dong", m, d1 + d2 + d5 + d10);
    return 0;
}
