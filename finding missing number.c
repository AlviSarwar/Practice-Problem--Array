//finding missing number

#include <stdio.h>

int main() 
{
    
    int arr[] = { 1, 2, 3, 4, 5,7,8,9}, i;
	int n = sizeof(arr) / sizeof(arr[0]);
    // Calculate the expected sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate the sum of the array elements
    int arraySum = 0;
    for (int i = 0; i < n-1; i++) {
        arraySum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    int missingNumber = totalSum - arraySum;

    // Output the missing number
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
