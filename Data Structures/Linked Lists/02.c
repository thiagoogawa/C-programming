// insert at beginning
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void insert_front(Node **head, int value) {
  // criar um novo node, definir o valor, fazer o nó apontar para o head atual e atualizar o node
  Node *new_node = malloc(sizeof(Node)); // Aloca memoria para um novo nó
  new_node -> data = value; // Define o valor armazenado no nó
  new_node -> next = *head; // O novo nó aponta para o head atual
  *head = new_node; // Atualiza o head para apontar para o novo node
}

void print_list(Node *head) {
  while(head) {
    printf("[%d] -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main() {
  Node *head = NULL; //lista começa vazia

  insert_front(&head, 30);
  insert_front(&head, 20);
  insert_front(&head, 10);

  printf("Lista inicial: \n");
  print_list(head); // [10] -> [20] -> [30] -> NULL

  insert_front(&head, 5); //Inserindo 5 no inicio

  //Liberando memória
  Node *temp;
  while(head) {
    temp = head;
    head = head->next;
    free(temp);
  }

  return 0;
}

