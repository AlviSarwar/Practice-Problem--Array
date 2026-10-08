// Find the k-th smallest element of an unsorted array (sort, then index).
#include <stdio.h>

int main(void)
{
    int num[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
    int n = sizeof(num) / sizeof(num[0]);
    int k;

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

    printf("Enter k (1 to %d): ", n);
    if (scanf("%d", &k) != 1 || k < 1 || k > n)
    {
        printf("\nInvalid k. Please enter a number between 1 and %d.\n", n);
        return 1;
    }

    printf("Smallest element at position k = %d: %d\n", k, num[k - 1]);
    return 0;
}
