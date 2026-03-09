#include <stdio.h>
#include <string.h>

int main() {
    char texto[200];
    int tamanho;

    printf("Digite uma frase: ");
    fgets(texto, 200, stdin);

    tamanho = strlen(texto);

    // remove o ENTER caso exista
    if (texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("A string possui %d caracteres.\n", tamanho);

    return 0;
}
