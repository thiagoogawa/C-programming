#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert_position(Node **head, int position, int value) {
    if (position == 0) {
        Node *new_node = malloc(sizeof(Node));
        new_node->data = value;
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node *temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Posição inválida!\n");
        return;
    }

    Node *new_node = malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = temp->next;
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

    insert_position(&head, 0, 10);  // [10]
    insert_position(&head, 1, 20);  // [10]->[20]
    insert_position(&head, 2, 30);  // [10]->[20]->[30]

    printf("Lista inicial:\n");
    print_list(head);

    insert_position(&head, 1, 15); // Insere 15 entre 10 e 20
    printf("Após inserir 15 na posição 1:\n");
    print_list(head);

    // Liberar memória
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
