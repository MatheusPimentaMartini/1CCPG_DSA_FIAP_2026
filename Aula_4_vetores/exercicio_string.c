#include<stdio.h>
#include<string.h>
int main(){
    char username[20];

    char padrao[20] = "admin";

    printf("Usuario: "); 
    fgets(username, 20, stdin);
    printf("%d e %d,\n", strlen(username), strlen(padrao));
    

    if(strcmp(username, padrao)){
        printf("Acesso liberado!");
    }else{
        printf("Acesso negado!");
    }



    return 0;
}