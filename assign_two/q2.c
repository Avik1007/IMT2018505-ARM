#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stack
{
    int top;
    int capacity; 
    int *arr;
}Stack;

Stack* empty_descending;

void stack_create(int capacity){
    empty_descending=(Stack*)malloc(sizeof(Stack));
    empty_descending->capacity = capacity;
    empty_descending->top = capacity-1;// for empty descending criteria 
    empty_descending->arr = (int *)malloc(capacity * sizeof(int));
}
void Push(int data)
{
    if(empty_descending->top == 0){
        printf("Stack is Full!\n");
        return;
    }
    empty_descending->arr[empty_descending->top]=data; // Empty means top points to next free location to add data and descending means it will travesre from a high memory address to a lower memory address 
    empty_descending->top--;
    printf("Number Pushed succesfully!\n");
}
void Pop()
{
    if(empty_descending->top+1 >= empty_descending->capacity)
    {
        printf("Stack is Empty!\n");
        return;
    }
    empty_descending->top=empty_descending->top+1; // Point to last pushed element in empty descending stack
    printf("Popped number: %d\n", empty_descending->arr[empty_descending->top]);
}
void print()
{
    if(empty_descending->top+1 >= empty_descending->capacity)
    {
        printf("Stack is Empty!\n");
        return;
    }
    for(int i=empty_descending->top+1;i < empty_descending->capacity;i++){
        printf("%d\n",empty_descending->arr[i]);
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

