//Move all negative numbers to beginning and positive to end
#include <stdio.h>

int main()
{
    int num[] = { -12 , 11 , -13 , -5 , 6 , 0 , -7 , 5 , -3 , -6 , 15};
    int n = sizeof(num) / sizeof(num[0]);
    int temp[n];
    int j =0;
    
    for (int i = 0; i < n; i++) 
    {
      if(num[i] < 0)
      {   
        temp[j]=num[i];
        j++; 
      } 
    }
    for (int i = 0; i < n; i++)
    {
      if (num[i]>=0)
      {
       
        temp[j]=num[i];
        j++;
        
      }
    }
    for (int i = 0; i < n; i++) 
    {
        num[i] = temp[i];
    }


    for (int i = 0; i < n; i++)
    {
      printf("%d  ",num[i]);
    }
    
    return 0;
}
