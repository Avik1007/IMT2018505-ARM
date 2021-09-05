#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stack
{
    int top;
    int capacity; 
    int *arr;
}Stack;

Stack* fully_ascending;

void stack_create(int capacity){
    fully_ascending=(Stack*)malloc(sizeof(Stack));
    fully_ascending->capacity = capacity;
    fully_ascending->top = -1;
    fully_ascending->arr = (int *)malloc(capacity * sizeof(int));
}
void Push(int data)
{
    if(fully_ascending->top+1 == fully_ascending->capacity){
        printf("Stack is Full!\n");
        return;
    }
    fully_ascending->arr[fully_ascending->top+1]=data; // Fully means top points to recently added data and ascending means it will travesre from a low memory address to a higher memory address 
    fully_ascending->top++;
    printf("Number Pushed succesfully!\n");
}
void Pop()
{
    if(fully_ascending->top < 0)
    {
        printf("Stack is Empty!\n");
        return;
    }
    printf("Popped number: %d\n", fully_ascending->arr[fully_ascending->top--]);
}
void print()
{
    if(fully_ascending->top < 0)
    {
        printf("Stack is Empty!\n");
        return;
    }
    for(int i=fully_ascending->top;i >= 0;i--){
        printf("%d\n",fully_ascending->arr[i]);
    }
}
int main()
{
    stack_create(100000); // created stack with capacity 10^5;
    
    printf("Pls enter one of the following commands: \n");
    printf("1.Push(data)\n");
    printf("2.Pop()\n");
    printf("3.print()\n");
    printf("4.exit\n");


    while(1)
    {
        char input[10];
        scanf("%s",input);
        if(input[1]=='u')
        {
            
            int i=0;
            char num[10];
            while(input[5+i]!=')')
            {
                
                num[i]=input[5+i];
                
                i++;
            }
            num[i]='\0';
            int number=atoi(num);
            Push(number);
            
        }
        else if(input[1]=='o')
        {
            Pop();
        }
        else if(input[1]=='r')
        {
            print();
        }
        else
        {
            break;
        }
    }
    return 0;
}

