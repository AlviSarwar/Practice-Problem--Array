// Find the union and intersection of two sorted arrays using two pointers.
#include <stdio.h>

int main(void)
{
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i = 0, j = 0;

    printf("Union of the two arrays: ");
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i++]);
        }
        else if (arr1[i] > arr2[j])
        {
            printf("%d ", arr2[j++]);
        }
        else
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        printf("%d ", arr1[i++]);
    }
    while (j < n2)
    {
        printf("%d ", arr2[j++]);
    }
    printf("\n");

    i = 0;
    j = 0;
    printf("Intersection of the two arrays: ");
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");

    return 0;
}
