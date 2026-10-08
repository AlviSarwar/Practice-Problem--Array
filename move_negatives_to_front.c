// Move all negative numbers to the beginning and the rest to the end,
// keeping the relative order inside each group.
#include <stdio.h>

int main(void)
{
    int num[] = {-12, 11, -13, -5, 6, 0, -7, 5, -3, -6, 15};
    int n = sizeof(num) / sizeof(num[0]);
    int temp[n];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < 0)
        {
            temp[j++] = num[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] >= 0)
        {
            temp[j++] = num[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        num[i] = temp[i];
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
