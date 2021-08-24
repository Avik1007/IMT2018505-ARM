#include<stdio.h>

int main()
{
    int arr[20];
    printf("Input 20 whole numbers:\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0;i<20;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    printf("number of even numbers in the array are: %d\n", count);
    return 0;
}