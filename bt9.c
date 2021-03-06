#include <stdio.h>
double giaithua (int n)
{
    int i;
    double S = 1;
    for (i = 1; i <= n; i ++)
        S = S * i;
    return S;
}
double luythua (int n, int x)
{
    int i;
    double S = x;
    for (i = 1; i < n; i ++)
        S = S * x;
    return S;
}
int main ()
{
    int i;
    double S;
    S = 1;
    for (i = 1; i < 10; i ++)
        S = S + luythua(i, 2)/ giaithua(i);
    printf("e^2 khai trien maclaurint den co so 10 la : %lf", S);
}
