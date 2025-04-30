//pt br
//operador -> (arrow): utilizado para acessar um membro de uma struct atraves de um ponteiro
//para essa struct.
//ptr -> campo == (*ptr).campo
//usar -> quando tiver um ponteiro para struct e quiser ler ou escrever um de seus campos

#include <stdio.h>

typedef struct {
  char *nome;
  int idade;
} Pessoa;

int main(void) {
  Pessoa p = {"Thiago", 22};
  Pessoa *ptr = &p;

  //Usando o operador . (quando temos a instancia direta)
  printf("Nome: %s, Idade: %d\n", p.nome, p.idade);

  //Usando o operador -> (quando temos um ponteiro para struct)
  printf("Nome: %s, Idade: %d\n", ptr->nome, ptr->idade);

  //A linha de cima equivale a:
  printf("Nome: %s, Idade: %d\n", (*ptr).nome, (*ptr).idade);

  return 0;
}

// Nome: Thiago, Idade: 22
// Nome: Thiago, Idade: 22
// Nome: Thiago, Idade: 22