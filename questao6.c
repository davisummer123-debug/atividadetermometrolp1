#include <stdio.h>

int main() {
    int numero, i, primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    } else {
        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("O numero %d é primo.\n", numero);
    } else {
        printf("O numero %d nao é primo.\n", numero);
    }

    return 0;
}
