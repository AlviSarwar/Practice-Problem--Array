//K’th Smallest Element in Unsorted Array


    #include <stdio.h>
    int main()
    {
 
        int i, j, a,k,kth_element;
        int num[] = { 1, 423, 6, 46, 34, 23, 13, 53, 4 };
        int n = sizeof(num) / sizeof(num[0]);

        for (i = 0; i < n; i++) 
        {
 
            for (j = i + 1; j < n; j++)
            {
 
                if (num[i] > num[j]) 
                {
 
                    a =  num[i];
                    num[i] = num[j];
                    num[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", num[i]);
        }
           printf("Enter the k:");
           scanf("%d", &k);
           printf("\nThe kth smallest element array is:");
       
        for (i = 1 ; i < k; i++)
        {  
             kth_element=num[i];  
        }
            printf("%d",kth_element);
           
 
    }