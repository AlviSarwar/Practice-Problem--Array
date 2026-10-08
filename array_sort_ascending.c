// Sort an array in ascending order (simple exchange sort).
#include <stdio.h>

int main(void)
{
    int num[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
    int n = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}
