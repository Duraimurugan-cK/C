#include<stdio.h>
#include<stdlib.h>
 struct node
    {
        int data;
        struct node*next;
    }*head,*tail;
void create(int data)
{
    struct node*newnode;
      newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        newnode->data=data;
        newnode->next=NULL;
        head=tail=newnode;
        tail->next=head;
    }
    else
    {
        tail->next=newnode;
        newnode->data=data;
        tail=newnode;
        tail->next=head;
    }
}
void beginning(int begin)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        newnode->data=begin;
        newnode->next=NULL;
        tail=head=newnode;
        tail->next=head;
    }
    else
    {
        newnode->data=begin;
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
}
void main()
{
   while(1)
   {
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            int data;
            printf("enter the data to insert:");
            scanf("%d",&data);
            create(data);
            break;
        }
    case 2:
        {
            printf("%d",tail->next->data);
            exit(0);
            break;
        }
    case 3:
        {
            int begin;
            printf("enter the data at begin:");
            scanf("%d",&begin);
            beginning(begin);
        }

    }
}
}
