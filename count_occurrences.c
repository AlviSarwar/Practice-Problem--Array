// Count how many times a number occurs in an array.
#include <stdio.h>

int main(void)
{
    int num[] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4};
    int n = sizeof(num) / sizeof(num[0]);
    int target, count = 0;

    printf("Enter the number to count: ");
    if (scanf("%d", &target) != 1)
    {
        printf("\nInvalid input. Please enter an integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] == target)
        {
            count++;
        }
    }

    printf("%d occurred %d time%s\n", target, count, count == 1 ? "" : "s");
    return 0;
}
