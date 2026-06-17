#include <stdio.h>

void inveterNum() {
    int numero;
    printf("-- Teste de Inverter Numero-- \n");
    printf("Digite um valor:\n");
    scanf("%d", &numero);
    while (numero > 0) {
        int digito = numero % 10;
        printf("%d \n",digito);
        numero=numero/10;
    }
}
void numberPar(){
    int numero,par;
    printf("-- Teste de Inverter Numero-- \n");
    printf("Digite um valor:\n");
    scanf("%d", &numero);
    while (numero > 0) {
        int digito = numero % 10;
        if (digito % 2 == 0) {
            par ++;
        }
        numero=numero/10;
        printf("%d \n",par);

    }}
int main(void){
    int op;
    do {
        printf("--Manipulação de numero-- \n");
        printf("Digite 1 para Inverter um numero \n");
        printf("Digite 2 para Ver quantos caracteres sao pares \n");
        printf("Digite 0 para sair \n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                inveterNum();
                break;
            case 2:
                numberPar();
                break;
            default:
                printf("Tente novamente");
                break;
        }
    }while (op != 0);
    return 0;
}
