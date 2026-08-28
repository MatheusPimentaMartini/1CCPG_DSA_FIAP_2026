#include <stdio.h>

int soma(int vetor[], int n)
{
    int soma = 0;
    for (int i = 1; i < n; i++)
    {
        soma += vetor[i];
        printf("%d", i);
    }
    return soma;
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    printf("%d\n", vetor[0]);
    printf("%d", soma(vetor, n));
    return 0;
}