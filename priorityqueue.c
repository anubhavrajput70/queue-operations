//implementation of priority queue with the help of singly linked list
#include<stdio.h>
#include<stdlib.h>
void enqueue(int ,int);
void dequeue();
void traverse();
struct node
{
int data,priority;
struct node *link;
};
struct node *root=NULL,*ptr,*temp;
void main()
{
int c,d,p;
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
printf("enter the data and its priority=");
scanf("%d%d",&d,&p);
enqueue(d,p);
break;
case 2:
dequeue();
case 3:
traverse();
break;
case 4:
exit(0);
default:
printf("invalid choice\n");
}
}}
void enqueue(int x,int y)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->priority=y;
temp->link=NULL;
if(root==NULL||y<=root->priority)
{
temp->link=root;
root=temp;
}
else
{
ptr=root;
while(ptr->link!=NULL&&ptr->link->priority<=y)
ptr=ptr->link;
temp->link=ptr->link;
ptr->link=temp;

}

printf("%d inserted with priority=%d\n",x,y);
}
void dequeue()
{
if(root==NULL)
printf("queue is empty");
else
{
ptr=root;
printf("%d deleted with priority=%d\n",ptr->data,ptr->priority);
root=root->link;
free(ptr);
}
}
void traverse()
{
if(root==NULL)
printf("queue is empty");
else
{
ptr=root;
printf("priority[data] :");
while(ptr!=NULL)
{
printf(" %d[%d]",ptr->priority,ptr->data);
ptr=ptr->link;
}
}
}
