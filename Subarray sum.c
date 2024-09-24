//Subarray with Given Sum using c language
#include <stdio.h>

int main() 
{
    int currentSum = 0,start = 0, targetSum=23;
    int num[] = { 15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(num) / sizeof(num[0]);

    for (int i= 0; i < n; i++) 
    {
        currentSum = currentSum + num[i];

        if (currentSum > targetSum && start <= i) 
        {
            currentSum -= num[start];
            start++;
        }

        // If the current sum equals the target sum, print the result
        if (currentSum == targetSum) 
        {
            printf("Subarray found from index %d to %d\n", start + 1, i + 1);
        
        }
    }        
         


    return 0;
}
