#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    while(valor >= 0) {
        if(valor % 2 == 1) {
            printf("%d \n", valor);
        }
        valor--;
    }
    
    return 0;
}