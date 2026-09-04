#include <stdio.h>

int main(){
    float notas[] = {0,0}, soma;
    int quantidade_notas;

    printf("Digite a quantidade notas que queira lancar: ");
    scanf("%d", &quantidade_notas);

    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite sua nota %d:\n",i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("\n");
    printf("A media das duas notas e: %.2f", soma/quantidade_notas);






    return 0;
}