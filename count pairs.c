//Count pairs with given sum

#include <stdio.h>

    int count = 0;
    
int main() 
{
  
    int arr[] = {1, 5, 7, -1, 5};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);

  
    // Iterate through each element in the array
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == target) 
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
