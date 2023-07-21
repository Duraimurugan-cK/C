#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*temp,*top,*node;
struct node* push()
{
    struct node* node_1 = malloc(sizeof(struct node));
    char ch[20];
    printf("\nEnter the value:");
    scanf("%s", &ch);
    if (top == NULL)
    {
        node_1->data = ch;
        node_1->next = NULL;
        top = node_1;
    }
    else
    {
        node_1->data = ch;
        node_1->next = top;
        top = node_1;
    }
    int n=sizeof(ch);
    int right=0,left=0,star=0;
    char sh[5]="true";
        if(ch[i]==')')
        {
            sh="false";
        }
        for(int i=0;i<n;i++)
        {
         if(ch[i]=')')
         {
             left++;
         }
         else if(ch[i]='(')
         {
             right++;
         }
         else{
            star++;
         }
            if(left%2==0)
            {
                sh="true";
            }
            else{
                if(star!=0)
                {

                }
            }

        }
}
struct node* pop()
{
    if (top == NULL)
    {
        printf("The stack is empty\n");
    }
    else
    {
        top = top->next;
    }
}
struct node* display()
{
    printf("Elements in the stack:\n");
    struct node* temp = top;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void check();

int main()
{
    int choice;
    do
    {
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        default:
            {
                exit(0);
                break;
            }
        }
    } while (1);
}
