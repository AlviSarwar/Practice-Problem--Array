//Find a peak element which is not smaller than its neighbors
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int max;
    int asize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < asize; i++)
    {
        if (arr[i] > arr[i-1])
        {
            max = arr[i];
        }
    }    
    printf("largest : %d", max);

    return 0;
}