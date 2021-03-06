#include <stdio.h>

int main()
{
    char a[1000];
    int i, num = 0, word = 1, n;
    scanf("%d", &n);
    printf("Nhap chuoi ky tu: ");
    for (i = 0; i < n; i ++)
        scanf("%c", &a[i]);
    for (i = 0; i < n; i ++)
    {
        if (a[i] == ' ' & a[i + 1] != ' ')
            word += 1;
    }
    for (i = 0; i < n; i ++)
    {
        if (a[i] == 97)
            num += 1;
    }
    printf("So tu trong chuoi la %d\n", word);
    printf("So ky tu a trong chuoi la %d", num);
}
