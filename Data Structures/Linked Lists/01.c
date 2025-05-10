#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//[data | pointer] -> [data | pointer ] -> [data | pointer]
typedef struct listitem {
  int data; //data
  struct listitem *next; //pointer to next node;
} LISTITEM;

int main() {
  LISTITEM *listhead, *temp;

  listhead = NULL; //listhead = first element (NULL)

  for(int i = 0; i < 3; i++) {
    temp = malloc(sizeof(LISTITEM)); //new node
    temp->data = i;
    temp->next = listhead;
    listhead = temp;
  }
  // i | temp->data | temp ->next | listhead
  // 1 | 0          | NULL        | point to temp(0)
  // 2 | 1          | temp 0       | point to temp(1)
  // 3 | 2          | temp 1        | point to temp(2)

  // listhead -> [2] -> [1] -> [0] -> NULL;
  temp = listhead;
  while(temp != NULL) {
    printf("list item: current is %p; next is %p; data is %d\n", temp, temp->next, temp->data);
    temp = temp->next;
  }

  temp = listhead;
  while(temp != NULL) {
    LISTITEM *to_free = temp;   
    temp = temp->next;          
    free(to_free);           
  }

  return 0;
}