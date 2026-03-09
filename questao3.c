#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    printf("Digite 5 numeros inteiros:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }

    printf("A soma total dos numeros é: %d\n", soma);

    return 0;
}
