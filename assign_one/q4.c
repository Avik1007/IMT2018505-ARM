#include<stdio.h>

int main()
{
    int arr[20];
    printf("Input 20 whole numbers:\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<20;i++)
    {
        for(int j=i+1;j<20;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Array Sorted!\n");
    for(int i=0;i<20;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}