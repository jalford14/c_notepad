#include <stdio.h>
#include <stdlib.h>
struct Node {
    int value;
    struct Node *next;
};

void append_node(struct Node** head, int value) {
    struct Node* new_node = 
           (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head;  
  
    new_node->value = value;
    new_node->next = NULL;
 
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    while(last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    return;
}

int main() {
    struct Node *head = NULL;
    append_node(&head, 3);
    append_node(&head, 5);
    append_node(&head, 9);
    append_node(&head, 1);

    while(head != NULL) {
        printf("value: %d\n", head->value);
        head = head->next;
    }

    return 0;
}
