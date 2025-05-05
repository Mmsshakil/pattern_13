#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], match;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &match);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int number = arr[i] + arr[j];
            if (number == match)
            {
                printf("Found: %d + %d = %d", arr[i], arr[j], match);
            }
        }
    }

    return 0;
}