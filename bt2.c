#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        if (b != 0)
            printf("Phương trinh co 1 nghiem x = %.3lf", (-1) * c / b);
        else if (b == 0 & c != 0)
            printf("Phuong trinh vo nghiem");
        else
            printf("Phuong trinh vo so nghiem");
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d == 0)
        {
            x = (-1) * b / (a * 2);
            printf("Phuong trinh co nghiem kep x = %.3lf", x);
        }
        else if (d < 0)
            printf("Phuong trinh vo nghiem");
        else
        {
            double x1, x2;
            x1 = ((-1) * b - sqrt(d)) / (2 * a);
            x2 = ((-1) * b + sqrt(d)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet\n x1 = %.3lf; x2 = %.3lf", x1, x2);
        }
    }
    return 0;
}
