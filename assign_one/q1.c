#include<stdio.h>

int main()
{
    int n1,n2,n3,largest;
    printf("Input three numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>n2)
    {
        largest=n1;
    }
    else
    {
        largest=n2;
    }
    if(largest<n3)
    {
        largest=n3;
    }
    printf("Largest number is: %d\n", largest);
    return 0;
}