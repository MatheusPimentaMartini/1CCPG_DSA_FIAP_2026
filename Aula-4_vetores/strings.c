#include<stdio.h>

int main(){
    //um inico caracter!
    //char valor = 'c';
    //char palavra[5] = {'a', 's', 'a', '\n', '\0'};
    //printf("%c", valor);
    //printf("%s", palavra);
    char nome[20]; //= "Erick Yamamoto";
    printf("Digite seu nome: ");
    //scanf("%s", nome); // Não aceita espaço, considera espaço como finalização
    fgets(nome, 20, stdin);
    printf("O meu nome e: %s", nome);



    return 0;
}