#include <stdio.h>

int main() {
    float temperatura, resultado;
    int opcao;

    printf("Escolha o tipo de conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if(opcao == 1) {
        resultado = (temperatura * 9/5) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", resultado);
    } 
    else if(opcao == 2) {
        resultado = (temperatura - 32) * 5/9;
        printf("Temperatura em Celsius: %.2f\n", resultado);
    } 
    else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
