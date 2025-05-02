#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100

struct Aluno {
  char nome[50];
  int matricula;
  double media;
};

void cadastrarAluno(struct Aluno alunos[], int *quantidade) {
  getchar();
  printf("Digite o nome do aluno: ");
  fgets(alunos[*quantidade].nome, 50, stdin);
  alunos[*quantidade].nome[strcspn(alunos[*quantidade].nome, "\n")] = '\0';

  printf("Digite o número da matrícula: ");
  scanf("%d", &alunos[*quantidade].matricula);

  printf("Digite a média final do aluno: ");
  scanf("%lf", &alunos[*quantidade].media);

  (*quantidade)++;
}

void exibirAlunos(struct Aluno alunos[], int quantidade) {
  for (int i = 0; i < quantidade; i++) {
    printf("\nAluno #%d\n", i + 1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matrícula: %d\n", alunos[i].matricula);
    printf("Média final: %.2lf\n", alunos[i].media);
  }
}

void buscarAlunos(struct Aluno alunos[], int quantidade) {
  int matricula;
  printf("Digite a matrícula do aluno: ");
  scanf("%d", &matricula);

  for (int i = 0; i < quantidade; i++) {
    if (alunos[i].matricula == matricula) {
      printf("\nNome: %s\n", alunos[i].nome);
      printf("Matrícula: %d\n", alunos[i].matricula);
      printf("Média final: %.2lf\n", alunos[i].media);
      return;
    }
  }

  printf("Aluno não encontrado.\n");
}

void calcularMediaTurma(struct Aluno alunos[], int quantidade) {
  if (quantidade == 0) {
    printf("Nenhum aluno cadastrado.\n");
    return;
  }

  double soma = 0;

  for (int i = 0; i < quantidade; i++) {
    soma += alunos[i].media;
  }

  double media_final = soma / quantidade;
  printf("Média final da turma: %.2lf\n", media_final);
}

void exibirAprovados(struct Aluno alunos[], int quantidade) {
  printf("\nAlunos aprovados:\n");

  for (int i = 0; i < quantidade; i++) {
    if (alunos[i].media >= 7.0) {
      printf("Nome: %s\n", alunos[i].nome);
      printf("Matrícula: %d\n", alunos[i].matricula);
      printf("Média: %.2lf\n\n", alunos[i].media);
    }
  }
}

int main() {
  struct Aluno alunos[MAX_ALUNOS];
  int quantidade = 0, opcao;

  do {
    printf("\n==== Menu ===="
           "\n1. Cadastrar aluno"
           "\n2. Exibir todos os alunos"
           "\n3. Buscar aluno por matrícula"
           "\n4. Calcular média da turma"
           "\n5. Exibir alunos aprovados"
           "\n6. Sair"
           "\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        if (quantidade < MAX_ALUNOS)
          cadastrarAluno(alunos, &quantidade);
        else
          printf("Limite de alunos atingido!\n");
        break;

      case 2:
        exibirAlunos(alunos, quantidade);
        break;

      case 3:
        buscarAlunos(alunos, quantidade);
        break;

      case 4:
        calcularMediaTurma(alunos, quantidade);
        break;

      case 5:
        exibirAprovados(alunos, quantidade);
        break;

      case 6:
        printf("Encerrando o programa.\n");
        break;

      default:
        printf("Opção inválida!\n");
    }
  } while (opcao != 6);

  return 0;
}
