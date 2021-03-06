#include <stdio.h>
typedef struct sophuc
{
	double pt, pa;		//phan thuc, phan ao
}	sp;
sp plus (sp a, sp b)
{
	sp c;
	c.pt = a.pt + b.pt;
	c.pa = a.pa + b.pa;
	return c;	
}
sp minus (sp a, sp b)
{
	sp c;
	c.pt = a.pt - b.pt;
	c.pa = a.pa - b.pa;
	return c;	
}
sp mult (sp a, sp b)
{
	sp c;
	c.pt = a.pt * b.pt - a.pa * b.pa;
	c.pa = a.pa * b.pt + a.pt * b.pa;
	return c;
}
int main ()
{
	sp a, b, c;
	printf("Nhap so phuc 1 duoi dang a + bi: \n");
	scanf("%lf %lf", &a.pt, &a.pa);
	printf("Nhap so phuc 2 duoi dang a + bi: \n");
	scanf("%lf %lf", &b.pt, &b.pa);
	c = plus(a, b);
	printf("Tong 2 so phuc la : %.2lf + %.2lfi\n", c.pt, c.pa);
	c = minus(a, b);
	printf("Hieu 2 so phuc la : %.2lf + %.2lfi\n", c.pt, c.pa);
	c = mult(a, b);
	printf("Tich 2 so phuc la : %.2lf + %.2lfi\n", c.pt, c.pa);	
}
