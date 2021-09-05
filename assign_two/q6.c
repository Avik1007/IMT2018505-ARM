#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define capacity 3

int circ_queue[capacity];
int rear=-1,front=-1;

void add_to_queue(int data)
{
    if((front == 0 && rear == capacity-1) || (rear == (front-1)%(capacity-1)))
    {
        printf("Queue is full!\n");
        return;
    }
    if(front ==-1) //for first element
    {
        front=0;
        rear=0;
        circ_queue[rear]=data;
    }
    else if (rear == capacity-1 && front != 0)
    {
        rear = 0;
        circ_queue[rear] = data;
    }
    else
    {
        circ_queue[++rear]=data;
    }
    printf("Data enqueued successfully!\n");
}

void remove_from_Queue()
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Element removed from queue : %d\n", circ_queue[front]); // in a queue the order is first in first out
    //updating front variable
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == capacity-1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void print()
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n",circ_queue[i]);
        }
    }
    else
    {
        for (int i = front; i < capacity; i++)
        {
            printf("%d\n", circ_queue[i]);
        }
 
        for (int i = 0; i <= rear; i++)
        {
            printf("%d\n", circ_queue[i]);
        }
    }
}
int main()
{
    printf("Pls enter one of the following commands: \n");
    printf("1.add_to_queue(data)\n");
    printf("2.remove_from_Queue()\n");
    printf("3.print()\n");
    printf("4.exit\n");


    while(1)
    {
        char input[10];
        scanf("%s",input);
        if(input[0]=='a')
        {
            
            int i=0;
            char num[10];
            while(input[13+i]!=')')
            {
                
                num[i]=input[13+i];
                
                i++;
            }
            num[i]='\0';
            int number=atoi(num);
            add_to_queue(number);
        }
        else if(input[0]=='r')
        {
            remove_from_Queue();
        }
        else if(input[0]=='p')
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