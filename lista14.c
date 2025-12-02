#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um numero positivo!\n");
        return 0;
    }

    printf("Contagem de 1 ate %d:\n", N);

    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}
