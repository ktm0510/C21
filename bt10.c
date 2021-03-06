#include <stdio.h>
#include <stdio.h>

void encode(char *a, int shift, int n)
{
	int i;
	char c;
	for (i = 0; i < n; i ++)
	{		
		c = (a[i] + shift - 97) % 26 + 97;
		printf("%d_", c);
	}
	return;
}
void decode(char *a, int shift, int n)
{
	int i;
	char c;
	for (i = 0; i < n; i ++)
	{		
		c = (a[i] - shift - 122) % 26 + 122;
		printf("%d_", c);
	}
	return;
}
int main ()
{
	int i, n;
	char a[1000];
	int shift;
	scanf("%d", &shift);
	scanf("%d", &n);
	for (i = 0; i < n; i ++)
	{
		scanf(" %c", &a[i]);
	}	
	encode(a, shift, n);
	printf("\n");
	decode(a, shift, n);
	return 0;	
	
}
