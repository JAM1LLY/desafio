#include <stdio.h>

int fibonacci(int numero) {
    int a = 0, b = 1, temp;
    while (b < numero) {
        temp = b;
        b = a + b;
        a = temp;
    }
    if (b == numero) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }
    return 0;
}

int main() {
    int numero;
    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);
    fibonacci(numero);
    return 0;
}
