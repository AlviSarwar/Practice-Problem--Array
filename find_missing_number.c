// Find the missing number in an array holding the values 1..N with one value
// missing. The array has N - 1 elements, so N = length + 1.
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int n = length + 1;

    // Expected sum of 1..N minus the actual sum leaves the missing value.
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int i = 0; i < length; i++)
    {
        actual += arr[i];
    }

    printf("The missing number is: %d\n", expected - actual);
    return 0;
}
