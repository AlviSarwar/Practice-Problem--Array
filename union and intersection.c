// Find Union and intersection of two sorted arrays
#include <stdio.h>

int main() 
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
            printf("%d ", arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) 
        {
            printf("%d ", arr2[j]);
            j++;
        } else 
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    // Print remaining elements of the first array
    while (i < n1) {
        printf("%d ", arr1[i]);
        i++;
    }

    // Print remaining elements of the second array
    while (j < n2) {
        printf("%d ", arr2[j]);
        j++;
    }
    printf("\n");

    // Find Intersection of two sorted arrays
    i = 0; // Resetting i
    j = 0; // Resetting j
    printf("Intersection of the two arrays: ");
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");

    return 0;
}
