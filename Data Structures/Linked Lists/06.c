// Remove specific element
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void delete_value(Node **head, int value) {
    Node *temp = *head, *prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Valor não encontrado!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void insert_end(Node **head, int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}

void print_list(Node *head) {
    while (head) {
        printf("[%d] -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    insert_end(&head, 10);
    insert_end(&head, 20);
    insert_end(&head, 30);
    insert_end(&head, 40);

    printf("Lista inicial:\n");
    print_list(head); // [10]->[20]->[30]->[40]->NULL

    delete_value(&head, 20);
    printf("Após remover 20:\n");
    print_list(head); // [10]->[30]->[40]->NULL

    delete_value(&head, 10);
    printf("Após remover 10:\n");
    print_list(head); // [30]->[40]->NULL

    // liberar memória restante
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
