//queue implementation with 1D array
#include<stdio.h>
#include<stdlib.h>
#define capacity 5
void insert(int);
void traverse();
int queue[capacity],rear=0,front=0,i;
void main()
{
int c,item;
while(1)
{
printf("\n1. insert\n");
printf("2. delete\n");
printf("3. traverse\n");
printf("4. exit\n");
printf("enter your choice");
scanf("%d",&c);
switch(c)
{
case 1:
printf("enter the element to insert=");
scanf("%d",&item);
insert(item);
break;
case 2:
deletion();
break;
case 3:
traverse();
break;
case 4:
exit(0);
default:
printf("invalid choice:");
}
}
}
void insert(int ele)
{
if(capacity==rear)
{
printf("queue is full\n");
}
else
{
queue[rear]=ele;
rear++;
printf("%d inserted\n",ele);
}
}

void deletion()
{
if(front==rear)
{
printf("queue is empty\n");
}
else
{
printf("%d deleted\n",queue[front]);
for(i=front;i<rear-1;i++)
{
queue[i]=queue[i+1];
}
rear--;
}
}
void traverse()
{
if(front==rear)
{
printf("queue is empty\n");
}
else
{
printf("queue elements are=\n");
for(i=front;i<rear;i++)
{
printf(" %d",queue[i]);
}
}
}
