#include <stdio.h>

int input (int m, int n)
{
	int **a, i, j;
	a = (int **)malloc (m * sizeof (int *));
	for (i = 0; i < m; i ++)
		a[i] = (int *)malloc (n * sizeof (int));
	for (i = 0; i < m; i ++)
	{
		for (j = 0;j < n; j ++)
			scanf("%d", &a[i][j]);
	}
	return a;
}
void output(int **a, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i ++)
	{
		for (j = 0;j < n; j ++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return;
}
int trans (int **a, int m, int n)
{
	int **b, i, j, c, d;
	b = (int **)malloc (n * sizeof (int *));
	for (i = 0; i < n; i ++)
		b[i] = (int *)malloc (m * sizeof (int));
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < m; j ++)
		{
			b[i][j] = a[j][i];
		}
	}
	return b;
}
int main ()
{
	int **a, i, j, m, n;
	printf("Nhap kich thuoc ma tran: \n");
	scanf("%d %d", &m, &n);
	printf("Nhap ma tran A: \n");
	a = input (m, n);
	output (a, m, n);
	printf("Ma tran chuyen vi cua A la: \n");
	a = trans (a, m, n);
	output (a, n, m);
	return 0;
}
