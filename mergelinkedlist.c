#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void merge(struct node** head1, struct node** head2) {
    struct node* mergedHead = NULL;
    struct node** mergeRef = &mergedHead;

    while (*head1 && *head2) {
        if ((*head1)->data <= (*head2)->data) {
            *mergeRef = *head1;
            *head1 = (*head1)->next;
        } else {
            *mergeRef = *head2;
            *head2 = (*head2)->next;
        }
        mergeRef = &((*mergeRef)->next);
    }

    *mergeRef = *head1 ? *head1 : *head2;
    *head1 = mergedHead;
}

int main() {
    struct node* head1 = NULL;
    struct node* head2 = NULL;

    int n;
    printf("Enter the size of the first linked list: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        struct node* newNode = createNode(data);
        if (head1 == NULL) {
            head1 = newNode;
        } else {
            struct node* temp = head1;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    printf("First linked list: ");
    display(head1);

    int n1;
    printf("Enter the size of the second linked list: ");
    scanf("%d", &n1);
    printf("Enter the elements: ");
    for (int i = 0; i < n1; i++) {
        int data;
        scanf("%d", &data);
        struct node* newNode = createNode(data);
        if (head2 == NULL) {
            head2 = newNode;
        } else {
            struct node* temp = head2;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    printf("Second linked list: ");
    display(head2);

    merge(&head1, &head2);
    printf("Merged linked list: ");
    display(head1);

    return 0;
}
