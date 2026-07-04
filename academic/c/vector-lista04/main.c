#include <stdio.h>
#include <string.h>
#include <ctype.h>

void notas() {
    float vnotas[4];
    float media;
    printf("Digite sua primeira nota: ");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &vnotas[i]);
    }
    media = (vnotas[0] + vnotas[1] + vnotas[2] + vnotas[3]) / 4;
    for (int i = 0; i < 4; i++) {
        printf("Nota (%d): %.2f\n", i + 1, vnotas[i]);
    }
    printf("Media: %.2f\n", media);
}

void invertido() {
    int vInvertidos[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 5; i >= 0; i--) {
        printf("%d \n", vInvertidos[i]);
    }
}

void maior() {
    int Valoresr[10];
    printf("Digite os valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &Valoresr[i]);
    }
    int maior = Valoresr[0];
    int indice = 0;
    for (int i = 1; i < 10; i++) {
        if (Valoresr[i] > maior) {
            maior = Valoresr[i];
            indice = i;
        }
    }
    printf("O maior valor e %d\n", maior);
    printf("O indice e %d\n", indice);
}

void soma() {
    int valores[10];
    int soma = 0;
    printf("Digite os valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }
    for (int i = 0; i < 10; i++) {
        soma += valores[i];
    }
    printf("A soma dos valores e: %d\n", soma);
}

// Ex5: le 5 floats e inverte a ordem dos elementos no proprio array
void trocaPosicao() {
    float valores[5];
    printf("Digite 5 valores: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &valores[i]);
    }
    for (int i = 0; i < 5 / 2; i++) {
        float temp = valores[i];
        valores[i] = valores[4 - i];
        valores[4 - i] = temp;
    }
    printf("Vetor invertido: ");
    for (int i = 0; i < 5; i++) {
        printf("%.1f ", valores[i]);
    }
    printf("\n");
}

void busca() {
    int valores[15];
    printf("Digite 15 valores: ");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &valores[i]);
    }
    int alvo;
    printf("Digite o valor a buscar: ");
    scanf("%d", &alvo);

    int encontrado = 0;
    for (int i = 0; i < 15; i++) {
        if (valores[i] == alvo) {
            printf("Valor encontrado na posicao %d\n", i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Valor nao encontrado\n");
    }
}

int buscaPosicao(int vetor[], int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i;
        }
    }
    return -1;
}

void testeBuscaPosicao() {
    int vetor[10];
    printf("Digite 10 valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    int numero;
    printf("Digite o numero a procurar: ");
    scanf("%d", &numero);

    int pos = buscaPosicao(vetor, 10, numero);
    if (pos != -1) {
        printf("Numero encontrado na posicao %d\n", pos);
    } else {
        printf("Numero nao encontrado\n");
    }
}


int contaPares(int vetor[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}

void testeContaPares() {
    int vetor[10];
    printf("Digite 10 valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Quantidade de pares: %d\n", contaPares(vetor, 10));
}

void somaVetores() {
    int a[8], b[8], c[8];
    printf("Digite os 8 valores do vetor A: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }
    printf("Digite os 8 valores do vetor B: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 8; i++) {
        c[i] = a[i] + b[i];
    }
    printf("Vetor C: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

void removeRepetidos() {
    int v1[10];
    int v2[10];
    int tamV2 = 0;

    printf("Digite 10 valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < 10; i++) {
        int jaExiste = 0;
        for (int j = 0; j < tamV2; j++) {
            if (v2[j] == v1[i]) {
                jaExiste = 1;
                break;
            }
        }
        if (!jaExiste) {
            v2[tamV2] = v1[i];
            tamV2++;
        }
    }

    printf("Vetor V2 (sem repetidos): ");
    for (int i = 0; i < tamV2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");
}

void ordenar(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void testeOrdenar() {
    int vetor[10];
    printf("Digite 10 valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    ordenar(vetor, 10);
    printf("Vetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void contaFrase() {
    char frase[200];
    printf("Digite uma frase: ");
    getchar();
    fgets(frase, 200, stdin);

    int totalCaracteres = strlen(frase);
    if (frase[totalCaracteres - 1] == '\n') {
        totalCaracteres--;
    }

    int contadorA = 0;
    for (int i = 0; i < totalCaracteres; i++) {
        if (frase[i] == 'a' || frase[i] == 'A') {
            contadorA++;
        }
    }

    printf("Total de caracteres: %d\n", totalCaracteres);
    printf("Quantidade de 'a'/'A': %d\n", contadorA);
}

void nomeCaso() {
    char nome[100];
    printf("Digite seu nome completo: ");
    getchar();
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    char maiusculo[100];
    char minusculo[100];
    int i;
    for (i = 0; nome[i] != '\0'; i++) {
        maiusculo[i] = toupper(nome[i]);
        minusculo[i] = tolower(nome[i]);
    }
    maiusculo[i] = '\0';
    minusculo[i] = '\0';

    printf("Maiusculo: %s\n", maiusculo);
    printf("Minusculo: %s\n", minusculo);
}

int contaVogais(char palavra[]) {
    int contador = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = tolower(palavra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

void testeContaVogais() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Quantidade de vogais: %d\n", contaVogais(palavra));
}

void palindromo() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int inicio = 0;
    int fim = strlen(palavra) - 1;
    int ehPalindromo = 1;

    while (inicio < fim) {
        if (tolower(palavra[inicio]) != tolower(palavra[fim])) {
            ehPalindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo) {
        printf("%s e um palindromo\n", palavra);
    } else {
        printf("%s NAO e um palindromo\n", palavra);
    }
}

int main(void) {
    int op;
    printf("--Lista 4--\n");
    printf("Escolha uma opcao: (1-15): ");
    scanf("%d", &op);
    switch (op) {
        case 1:
            notas();
            break;
        case 2:
            invertido();
            break;
        case 3:
            maior();
            break;
        case 4:
            soma();
            break;
        case 5:
            trocaPosicao();
            break;
        case 6:
            busca();
            break;
        case 7:
            testeBuscaPosicao();
            break;
        case 8:
            testeContaPares();
            break;
        case 9:
            somaVetores();
            break;
        case 10:
            removeRepetidos();
            break;
        case 11:
            testeOrdenar();
            break;
        case 12:
            contaFrase();
            break;
        case 13:
            nomeCaso();
            break;
        case 14:
            testeContaVogais();
            break;
        case 15:
            palindromo();
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}