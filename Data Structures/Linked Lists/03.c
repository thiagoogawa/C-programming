// insert at the end

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert_end(Node **head, int value) {
  Node *new_node = malloc(sizeof(Node));
  new_node -> data = value;
  new_node -> next = NULL; // o ultimo nó sempre aponta para NULL

  // se a lista estiver vazia, novo nó se torna head
  if(*head == NULL) {
    *head = new_node;
    return;
  }

  // se não percorre até o último nó atual
  Node *temp = *head;
  while(temp->next != NULL) {
    temp = temp->next;
  }

  // conecta o último nó atual ao novo nó
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
  Node *head = NULL; // Lista começa vazia

  insert_end(&head, 10);
  insert_end(&head, 20);
  insert_end(&head, 30);

  printf("Lista inicial:\n");
  print_list(head);  // [10] -> [20] -> [30] -> NULL

  insert_end(&head, 40);  // Insere 40 no fim

  printf("Após inserir 40 no fim:\n");
  print_list(head);  // [10] -> [20] -> [30] -> [40] -> NULL

  // Libera memória
  Node *temp;
  while (head) {
      temp = head;
      head = head->next;
      free(temp);
  }

  return 0;
}