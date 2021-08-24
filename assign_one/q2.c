#include<stdio.h>

int main()
{
    int arr[15];
    printf("Input 15 whole numbers:\n");
    for(int i=0;i<15;i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    for(int i=1;i<15;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("Largest number in the array is: %d\n", largest);
    return 0;
}