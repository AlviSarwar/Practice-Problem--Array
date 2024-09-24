#include <stdio.h>

int main()
{   
    int originalArr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(originalArr) / sizeof(originalArr[0]);
    int revarr[size];
    for (int i = 0; i<size; i++)
    {
        revarr[i]=originalArr[i];
    }
    printf("Reversed array: ");
    for (int i = size-1; i>=0; i--)
    {
        printf("%d ",revarr[i]);
    }

     return 0;

}
