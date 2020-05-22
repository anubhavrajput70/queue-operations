//queue implementation with singl linked list
#include<stdio.h>
#include<stdlib.h>
void insert(int);
void traverse();
void deletion();
struct node
{
int data;
struct node *link;
};
typedef struct node queue;
queue *rear=NULL,*front=NULL,*temp,*ptr;
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
temp=(struct node*)malloc(sizeof(queue));
temp->data=ele;
temp->link=NULL;
if(front==NULL)
{
front=rear=temp;
}
else
{
rear->link=temp;
rear=temp;
printf("\n%d inserted\n",ele);
}
}
void deletion()
{
if(front==NULL)
{
printf("queue is empty\n");
}
else
{
temp=front;
front=front->link;
printf("\ndeleted element %d\n",temp->data);
free(temp);
}}
void traverse()
{
if(front==NULL)
{
printf("queue is empty\n");
}
else
{
printf("\nqueue elements are=\n");
temp=front;
while(temp!=NULL)
{
printf(" %d",temp->data);
temp=temp->link;
}
}
}
