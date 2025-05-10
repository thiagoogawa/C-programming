//Search for a specific element
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* search(Node *head, int value) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp->data == value)
            return temp;
        temp = temp->next;
    }
    return NULL;
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
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

int main() {
    Node *head = NULL;

    insert_end(&head, 10);
    insert_end(&head, 20);
    insert_end(&head, 30);
    insert_end(&head, 40);

    int valor = 30;
    Node *resultado = search(head, valor);

    if (resultado != NULL) {
        printf("Encontrado valor: %d\n", resultado->data);
    } else {
        printf("Valor %d não encontrado na lista.\n", valor);
    }

    // Liberar memória
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
