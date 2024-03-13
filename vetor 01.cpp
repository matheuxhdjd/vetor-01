#include <stdio.h>
int primo(int num) {
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int vetor[9];
    int primos[9];
    int posicao = 0;


    printf("Digite os numeros inteiros:\n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < 9; i++) {
        if (primo(vetor[i])) {
            primos[posicao] = vetor[i];
            posicao++;
        }
    }

    printf("\nnumeros primos e sua posicao :\n");
    for (int i = 1; i < posicao; i++) {
        printf("%d posicao %d\n", primos[i], i);
    }

    return 0;
}

