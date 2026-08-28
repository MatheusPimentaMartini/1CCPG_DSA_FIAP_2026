#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int idade;
    char sexo;
    char nome[50];
}Pessoa;

struct Pessoa2{
    int idade;
    char sexo;
    char nome[50];
};

int main() {
    //Jeito 1 de fazer
    Pessoa pessoa1;
    

    pessoa1.idade = 18;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome,"Matheus");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome,pessoa1.idade, pessoa1.sexo);
    

    //Jeito dois de fazer

    struct Pessoa2 pessoa2;
    pessoa2.idade = 49;
    pessoa2.sexo = 'f';
    strcpy(pessoa2.nome,"Renata");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome,pessoa2.idade, pessoa2.sexo);
    return 0;

}