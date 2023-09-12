#include <stdio.h>

int main() {
    
    int result_flag = 0, total = 0;

    do {
        printf("FEIRA DA FRUTA \n");
        printf("1 | ABACAXI  5,00 a unidade\n2 | MACA     1,00 a unidade\n3 | PERA     4,00 a unidade\n");
        printf("0 | EXIBIR VALORES: \n");

        printf("Selecione o valor da fruta: ");
        scanf("%d", &result_flag);

        if(result_flag == 1) {
            total += 5;
        } else if(result_flag == 2) {
            total += 1;
        } else if(result_flag == 3) {
            total += 4;
        }

    } while (result_flag != 0);

    printf("VALOR TOTAL: %d", total);
    
    return 0;
}