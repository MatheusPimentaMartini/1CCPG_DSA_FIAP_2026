#include <stdio.h>
#include <string.h>

// Aula 168: Como criar uma struct com dados lidos do teclado

typedef struct{
    int idade;
    char sexo;
    char nome[50];    
}Pessoa;

int main(){
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome,100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    scanf("%c");
    printf("Digite f ou m para o sexo: ");
    scanf("%c", &pessoa.sexo);
    

    printf("Nome: %s\nSexo: %c\nIdade %d", pessoa.nome, pessoa.sexo, pessoa.idade);

    return 0;
}