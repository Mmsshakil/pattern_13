#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, star = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = space; k >= 1; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }

    return 0;
}