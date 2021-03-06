#include <stdio.h>

int plus (int **a, int **b, int m, int n)
{
	int **c, i, j;
	c = (int **)malloc (m * sizeof (int *));
	for (i = 0; i < m; i ++)
		c[i] = (int *)malloc (n * sizeof (int));
		printf("Tong 2 ma tran A va B la: \n");
	for (i = 0; i < m; i ++)
	{
		for (j = 0; j < n; j ++)
			c[i][j] = a[i][j] + b[i][j];
	}
	return c;
}
int minus (int **a, int **b, int m, int n)
{
	int **c, i, j;
	c = (int **)malloc (m * sizeof (int *));
	for (i = 0; i < m; i ++)
		c[i] = (int *)malloc (n * sizeof (int));
		printf("Hieu 2 ma tran A va B la: \n");
	for (i = 0; i < m; i ++)
	{
		for (j = 0; j < n; j ++)
			c[i][j] = a[i][j] - b[i][j];
	}
	return c;
}
int premult(int **a, int **b, int m, int x, int y)
{
	int i, c = 0;
	for (i = 0; i < m; i ++)
		c += a[x][i]*b[i][y];
	return c;	
}
int mult (int **a, int **b, int m1, int n1, int m2, int n2)
{
	int **c, i, j;
	c = (int **)malloc (m1* sizeof (int *));
	for (i = 0; i < m1; i ++)
		c[i] = (int *)malloc (n2 * sizeof(int *));
	printf("Tich cua 2 ma tran A va B la: \n");
	for (i = 0; i < m1; i ++)
	{
		for (j = 0; j < n2; j ++)
			c[i][j] = premult(a, b, n1, i, j);			
	}
	return c;
}
int input (int m, int n)
{
	int **a, i, j;
	a = (int **)malloc (m * sizeof (int *));
	for (i = 0; i < m; i ++)
		a[i] = (int *)malloc (n * sizeof (int));
	for (i = 0; i < m; i ++)
	{
		for (j = 0; j < n; j ++)
			scanf("%d", &a[i][j]);
	}
	return a;
}
void output (int **a, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return;
}
int main ()
{
	int m1, n1, m2, n2, i, j;
	int **a, **b, **c;
	printf("Nhap kich co ma tran A: ");
	scanf("%d %d", &m1, &n1);
	a = input(m1, n1);
	printf("Nhap kich co ma tran B: ");
	scanf("%d %d", &m2, &n2);
	b = input(m2, n2);
	if (m1 == m2 & n1 == n2)
	{
		c = plus (a, b, m1, n1);
		output(c, m1, n1);
		c = minus (a, b, m1, n1);
		output(c, m1, n1);
	}
	else	printf("Khong the cong và tru 2 ma tran\n");
	if (m1 == n2 & m2 == n1)
	{
		c = mult (a, b, m1, n1, m2, n2);
		output(c, m1, n2);
	}
	else printf("Khong the nhan 2 ma tran\n");
	return 0;
}
