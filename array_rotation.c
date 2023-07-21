#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head,*tail;
void insert(int n)
{
    for(int i=0;i<n;i++)
    {
        int data;
        scanf("%d",&data);
        struct node*new =malloc(sizeof(struct node));
        new->data=data;
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
void display()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("it is empty");
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void rotate()
{
    int k;
    scanf("%d",&k);
    struct node*temp=head;
    for(int i=1;i<k;i++)
    {
        temp=temp->next;
    }
tail->next=head;
head=temp->next;
temp->next=NULL;
tail=temp;
}
void pairwiseswap()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        int k=temp->data;
        temp->data=temp->next->data;
        temp->next->data=k;
        temp=temp->next->next;
    }
}
void greaterright()
{
    struct node*temp=head;
    struct node*prev=head;
    while(temp!=NULL)
    {
        if(temp->data>temp->next->data)
        {
            temp=temp->next;
        }
        else{
            temp->next=NULL;
            head=temp1;
        }
        temp=temp->next;
        temp1=temp1->next;

    }
}
int main()
{
    int n;
    while (1) {
        printf("Enter an choice:");
        scanf("%d", &n);

        switch (n) {
            case 1:
                 printf("Enter an size: ");
        scanf("%d", &n);
                insert(n);
                break;

            case 2:
                display();
                break;

            case 3:
                pairwiseswap();
                break;
            case 4:
                greaterright();
                break;
            case 5:
                rotate();
                break;

            default:
                printf("Invalid input.\n");
                break;
        }
    }
    return 0;
}
