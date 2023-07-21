#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void create(int n) {
    for(int i = 0; i < n; i++) {
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;
        if(head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
}
void display() {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void front(int n) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = tail->data;
    new_node->next = head;
    head = new_node;
    struct node* temp1 = head;
    int count=0;
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        count++;
    }
    struct node* temp = head;
    for(int i = 1; i < count-1; i++) {
        temp = temp->next;
    }
    tail->next = temp->next;
    temp->next = NULL;
}

int main() {
    int n;
    scanf("%d",&n);
    create(n);
    printf("\n");
    front(n);
    display();
    return 0;
}
