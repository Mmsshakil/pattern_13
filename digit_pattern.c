#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, value = 1;

    for (int i = 1; i <= n; i++) // for line
    {
        for (int k = space; k >= 1; k--) // for space
        {
            printf(" ");
        }

        for (int j = 1; j <= value; j++) // for digit
        {
            printf("%d", j);
        }
        printf("\n");
        value++;
        space--;
    }

    return 0;
}