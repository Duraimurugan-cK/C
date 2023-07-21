#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data;
     struct node*prev;
     struct node*next;
 }*head,*tail;
 int node_count=0;
 void insert(int data)
 {
    struct node*new_node=malloc(sizeof(struct node));
    new_node->prev=NULL;
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        node_count++;
    }
    else
    {
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        node_count++;
    }
 }
 void display()
 {
     struct node*temp=head;
     if(head==NULL)
     {
         printf("it is empty");
     }
     while(temp!=NULL)
     {
         printf("%d " ,temp->data);
         temp=temp->next;
     }
 }
 void insertpos(int data,int pos)
 {
    struct node*new_node=malloc(sizeof(struct node));
    new_node->prev=NULL;/*note*/
    new_node->data=data;
    new_node->next=NULL;
    if(pos==0)
    {
        head->prev=new_node;
         new_node->next=head;
        head=new_node;
        node_count++;
    }
    else{
        struct node*temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;

        }
        new_node->next=temp->next;
        temp->next->prev = new_node;
        temp->next=new_node;
        node_count++;
    }

 }
 void delete(int pos)
 {
     if(pos==0)
     {
         head=head->next;
         node_count--;
     }
     else
     {
         struct node*temp=head;
         for(int i=0;i<pos-1;i++)
         {
             temp=temp->next;
         }
         temp->next->prev=temp->next->next;/*note*/
         node_count--;
     }
 }
 void main()
 {
      while(1)
 {
 int choice;
 printf("1.Insert\n 2.Delete\n 3.Insert at position\n 4.Display\n 5.Exit\n");
 printf("enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
    {
        int data;
        printf("enter the value:");
        scanf("%d",&data);
        insert(data);
        printf("\n");
        break;
    }
 case 4:
    {
        display();
        printf("\n");
        break;
    }
 case 3:
    {
        int val,pos;
        printf("enter the value to insert:");
        scanf("%d",&val);
        printf("enter the position to insert:");
        scanf("%d",&pos);
        insertpos(val,pos);
        printf("\n");
        break;
    }
 case 2:
    {
        int pos;
        printf("enter the index to delete:");
        scanf("%d",&pos);
        delete(pos);
        printf("\n");
        break;
    }
 default:
    {
        exit(0);
        break;
    }
 }
 }
 }
