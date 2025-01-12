#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *left;
    struct Node *right;
};

void insert_node(struct Node **head, int val) {
    if(*head == NULL) {
        printf("adding node with value: %d\n", val);
        struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->value = val;
        new_node->left = NULL;
        new_node->right = NULL;
        *head = new_node;
        return;
    }

    struct Node *curr = *head;
    if(val >= curr->value) {
        insert_node(&(curr->right), val);
    } else {
        struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
        insert_node(&(curr->left), val);
    }
}

int main() {
    printf("starting...\n");
    struct Node *head = NULL;

    insert_node(&head, 32);
    insert_node(&head, 5);
    insert_node(&head, 10);
    insert_node(&head, 4);
    insert_node(&head, 23);
    insert_node(&head, 108);
    insert_node(&head, 54);
    insert_node(&head, 13);
    printf("val: %d\n", head->value);
    printf("val: %d\n", head->left->value);
    printf("val: %d\n", head->right->value);
}
