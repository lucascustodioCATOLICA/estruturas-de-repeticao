#include <stdio.h>

int main() {
    
    char sexo[100], olhos[100], cabelo[100];
    short idade[100];
    float salario[100];

    int iteracao = 0;
    int valor_invalido = 0;
    do {
        printf("    DADOS USUARIO %d \n", iteracao+1);

        do {
            printf("Digite o valor do sexo: (M = Masculino | F = Feminino) \n");
            scanf("%s", &sexo[iteracao]);

            if(sexo[iteracao] != 'M' && sexo[iteracao] != 'F') {
                valor_invalido = 1;
            } else {
                valor_invalido = 0;
            }
        } while (valor_invalido == 1);

        do {
            printf("Digite o valor da cor dos olhos: (A = Azul | V = Verde | C = Castanho | P = Preto) \n");
            scanf("%s", &olhos[iteracao]);

            if(
                olhos[iteracao] != 'A' && 
                olhos[iteracao] != 'V' && 
                olhos[iteracao] != 'C' && 
                olhos[iteracao] != 'P'
            ) {
                valor_invalido = 1;
            } else {
                valor_invalido = 0;                
            }
        } while (valor_invalido == 1);

        do {
            printf("Digite o valor da cor dos cabelos: (L = Loiro | C = Castanho | R = Ruivo | P = Preto) \n");
            scanf("%s", &cabelo[iteracao]);

            if(
                cabelo[iteracao] != 'L' && 
                cabelo[iteracao] != 'C' && 
                cabelo[iteracao] != 'R' && 
                cabelo[iteracao] != 'P'
            ) {
                valor_invalido = 1;
            } else {
                valor_invalido = 0;
            }
        } while (valor_invalido == 1);

        do {
            printf("Digite sua idade em anos \n");
            scanf("%d", &idade[iteracao]);

            if(
                !(
                    idade[iteracao] >= 10 &&
                    idade[iteracao] <= 100
                )
            ) {
                if(idade[iteracao] != -1) {
                    valor_invalido = 1;
                } else {
                    valor_invalido = 0;    
                }
            } else {
                valor_invalido = 0;
            }
        } while (valor_invalido == 1);

        do {
            printf("Digite seu salario \n");
            scanf("%f", &salario[iteracao]);

            if(
                salario[iteracao] < 0
            ) {
                valor_invalido = 1;
            } else {
                valor_invalido = 0;
            }
        } while (valor_invalido == 1);

        iteracao++;
    } while (idade[iteracao-1] != -1);

    int total_pessoas = iteracao - 1;
    int alvo = 0;
    for(int i = 0; i < total_pessoas; i++) {
        if(sexo[i] == 'F' && idade[i] >= 18 && idade[i] <= 35 && olhos[i] == 'C' && cabelo[i] == 'C') {
            alvo++;
        }
    }

    float porcentagem = ((float) alvo / total_pessoas) * 100;

    printf("TOTAL DE INDIVIDUOS: %.2f%%", porcentagem);
    
    return 0;
}