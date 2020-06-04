 // implementation of circular queue by 1d array
 #include<stdio.h>
#include<stdlib.h>
#define max 10
void enqueue(int);
int dequeue();
void traverse();
int queue[max],rear=-1,front=-1,i;
void main()
{
int c,n;
while(1)
{
printf("\n1. enqueue\n");
printf("2. dequeue\n");
printf("3. traverse\n");
printf("4. exit\n");
printf("enter your choice=");
scanf("%d",&c);
switch(c)
{
case 1:
printf("enter element to insert=");
scanf("%d",&n);
enqueue(n);
break;
case 2:
i=dequeue();
printf("%d deleted",i);
break;
case 3:
traverse();
break;
case 4 :
exit(0);
default:
printf("invalid choice\n");
}}
}
void enqueue(int val)
{
if(front==0&&rear==max-1)
printf("overflow\n");
if(front==-1&&rear==-1)
front=rear=0;
else if(rear==max-1&&front!=0)
rear=0;
else
rear++;
queue[rear]=val;
printf("%d inserted",val);
}
int dequeue()
{
if(front==-1)
printf("underflow");
i=queue[front];
if(front==rear)
front=rear=-1;
else if(front==max-1)
front=0;
else
front++;
return i;
}
void traverse()
{
if(front==-1&&rear==-1)
printf("queue is empty");
else
{
printf("queue elements are=\n");
for(i=front;i<=rear;i++)
printf(" %d",queue[i]);
}
}
