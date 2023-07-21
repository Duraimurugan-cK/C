#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*tail,*new,*temp,*temp1;
void insert_at_end(int val)
{
    new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    new->next=NULL;
    tail->next=new;
    tail=new;
}
void insert_at_front(int val)
{
    new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    new->next=head;
    head=new;
}
void position_insert(int pos,int val)
{
    new=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    new->data=val;
    new->next=temp->next;
    temp->next=new;
}
void create()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else{
        tail->next=new;
        tail=new;
    }
    }
}
void sort()
{
    int a;
    temp=head;
    while(temp!=NULL)
    {
        temp1=temp->next;
        while(temp1!=NULL)
        {
        if(temp->data > temp1->data)
        {
            a=temp->data;
            temp->data=temp1->data;
            temp1->data=a;
        }
        temp1=temp1->next;
    }
    temp=temp->next;
    }
}
void display()
{
    tail=head;
    while(tail!=NULL)
    {
        printf("%d ",tail->data);
        tail=tail->next;
    }
}
void even()
{
    temp=head;
    while(temp!=NULL)
    {
        if((temp->data)%2==0)
        {
        printf("%d ",temp->data);
        }
        temp=temp->next;
    }
}
void positionprint(int pos)
{
    temp=head;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    while(1)
    {
       printf("\n 1.insert 2.display 3.even num  4.positionprint 5.sort  6.insert at middle 7.insert at front 8.insert at end");
       printf("\nEnter your choice:");
       int choice;
       scanf("%d",&choice);
       switch(choice)
       {
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                 display();
                 break;
            }
            case 3:
                {
                    even();
                    break;
                }
            case 4:
                {
                    int pos;
                    scanf("%d",&pos);
                    positionprint(pos);
                    break;
                }
            case 5:
                {
                    sort();
                    break;
                }
            case 6:
                {
                    int pos,val;
                    printf("enter the pos:");
                    scanf("%d",&pos);
                    printf("enter the value:");
                    scanf("%d",&val);
                    position_insert(pos, val);
                    break;
                }
            case 7:
                {
                    int val;
                    printf("enter the value:");
                    scanf("%d",&val);
                    insert_at_front(val);
                    break;
                }
            case 8:
                {
                    int val;
                    printf("enter the value:");
                    scanf("%d",&val);
                    insert_at_end(val);
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
