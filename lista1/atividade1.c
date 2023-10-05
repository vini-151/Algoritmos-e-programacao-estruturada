#include <stdio.h>

int main() {

  char nomeUsuario[25];
  int idade;
  char matricula[11];
  char endereco[50];
  char curso[30];
  int periodo;
  int disciplinas;

  printf("\n Bem vindo ao cadastro academico. Digite o nome de usuario: ");
  fgets(nomeUsuario, 25, stdin);
  printf("Nome do usuario: %s", nomeUsuario);
  printf("\n Ola, %s. Digite sua idade\n", nomeUsuario);
  scanf("%d", &idade);
  printf("Sua idade e: %d. Agora, insira sua matricula\n", idade);
  fflush(stdin);
  fgets(matricula, 11, stdin);
  printf("\nSua matricula e: %s.\n Agora, insira seu endereco:\n", matricula);
  fflush(stdin);
  fgets(endereco, 50, stdin);
  printf("\nSeu endereco e: %s. \n %s, qual e o seu curso?\n", endereco, nomeUsuario);
  fgets(curso, 30, stdin);
  printf("Curso inserido: %s. Em qual periodo voce esta estudando?", curso);
  fflush(stdin);
  scanf("%d", &periodo);
  printf("%d periodo selecionado. Quantas disciplinas voce possui em sua grade atual?\n", periodo);
  scanf("%d", &disciplinas);
  printf("\nRevise suas informacoes.\nNome: %sIdade: %d\nMatricula: %s\nEndereco: %sCurso: %speriodo: %d\nDisciplinas: %d\nCadastro realizado com sucesso, %s!", nomeUsuario, idade, matricula, endereco, curso, periodo, disciplinas, nomeUsuario);
}
