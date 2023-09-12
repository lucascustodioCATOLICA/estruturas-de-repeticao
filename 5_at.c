#include <stdio.h>

int main() {
    int valor = 0;

    int contador = 0;
    while(contador <= 50) {
        if(contador % 2 == 0) {
            valor += contador;
        }
        contador++;
    }

    printf("%d \n", valor);
    
    return 0;
}