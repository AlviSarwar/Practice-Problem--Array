//Count number of occurrences (or frequency) in a sorted array

#include <stdio.h>
    int main()
    {
 
        int i,j,ctr=0;
        int num[] = { 1,1,1,2,2,2,2,3,3,3,4,4};
        int n = sizeof(num) / sizeof(num[0]);
        printf("Enter the number you want to see that ocurred how many times:");
        scanf("%d", &j);
        for (i = 0; i < n; i++) 
        {
 
            if (num[i] == j ) 
            {
               ctr++;
            }     
        }
            printf("\n%d occured %d times", j,ctr);
        }