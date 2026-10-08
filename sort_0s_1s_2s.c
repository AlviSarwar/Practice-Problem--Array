// Sort an array containing only 0s, 1s and 2s by counting each value.
#include <stdio.h>

int main(void)
{
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int c0 = 0, c1 = 0, c2 = 0, idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            c0++;
        }
        else if (a[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    for (int i = 0; i < c0; i++)
    {
        a[idx++] = 0;
    }
    for (int i = 0; i < c1; i++)
    {
        a[idx++] = 1;
    }
    for (int i = 0; i < c2; i++)
    {
        a[idx++] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
