#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    int contador = 0;
    while(contador <= valor) {
        printf("%d \n", contador);
        contador++;
    }
    
    return 0;
}