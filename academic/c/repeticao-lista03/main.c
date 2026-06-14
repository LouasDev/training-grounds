#include <stdio.h>
#include <stdlib.h>
// Preferi fazer os exercicios em Funções, afim de manter o main mais limpo
void exercicio01() {
    float totalSalario = 0, totalFilhos = 0, mediaFilhos = 0, mediaPopulacao, filhosPopulacao, maiorSalario = 0,
            percentual, salario, x2 = 0, x3 = 0, qtdSalarios = 0;

    do {
        printf("Digite o seu salario");
        scanf("%f", &salario);
        if (salario < 0) {
            printf(" --- O SALARIO DEVE SER MAIOR QUE ZERO ---- ");
            break; //Pra finalizar insta pra nao contabilizar ou bugar
        }
        if (salario <= 100) {
            x3++;
        }
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        printf("Digite quantos filhos possui sua familia");
        scanf("%f", &filhosPopulacao);
        x2++;
        qtdSalarios++;
        totalFilhos += filhosPopulacao;
        totalSalario += salario;
    } while (salario > 0);

    percentual = (x3 / qtdSalarios) * 100.00;
    mediaPopulacao = totalSalario / x2;
    mediaFilhos = totalFilhos / x2;
    printf("A media de salario é %0.2f \n", mediaPopulacao);
    printf("A media de filhos é %0.2f \n", mediaFilhos);
    printf("O maior salario é %0.2f \n", maiorSalario);
    printf("O percentual é %0.2f \n", percentual);
}

void exercicio02() {
    float alturaChico = 1.50, alturaZe = 1.10, anos = 0;

    do {
        alturaChico = alturaChico + 0.02;
        alturaZe = alturaZe + 0.03;
        anos++;
    } while (alturaZe <= alturaChico);

    printf("Serão necessários anos para que Zé seja maior que Chico. %0.2f \n", anos);
}

struct ResultadoEleicao {
    int cand1;
    int cand2;
    int cand3;
    int cand4;
    int nulos;
    int brancos;
};


struct ResultadoEleicao exercicio03() {
    struct ResultadoEleicao resultado;

    resultado.cand1 = 0;
    resultado.cand2 = 0;
    resultado.cand3 = 0;
    resultado.cand4 = 0;
    resultado.nulos = 0;
    resultado.brancos = 0;

    int voto;

    do {
        printf("Digite o codigo do seu Candidato: ");
        scanf("%d", &voto);
        if (voto == 1) {
            resultado.cand1 += 1;
        } else if (voto == 2) {
            resultado.cand2 += 1;
        } else if (voto == 3) {
            resultado.cand3 += 1;
        } else if (voto == 4) {
            resultado.cand4 += 1;
        } else if (voto == 5) {
            resultado.nulos += 1;
        } else if (voto == 6) {
            resultado.brancos += 1;
        }
    } while (voto != 0);
    return resultado;
}

struct contagemIntervalos {
    int inter1;
    int inter2;
    int inter3;
    int inter4;
};

struct contagemIntervalos exercicio04() {
    struct contagemIntervalos contagem;
    contagem.inter1 = 0;
    contagem.inter2 = 0;
    contagem.inter3 = 0;
    contagem.inter4 = 0;
    int valor;
    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor >= 76 && valor <= 100) {
            contagem.inter1 += 1;
        } else if (valor >= 51 && valor <= 75) {
            contagem.inter2 += 1;
        } else if (valor >= 26 && valor <= 50) {
            contagem.inter3 += 1;
        } else if (valor >= 0 && valor <= 25) {
            contagem.inter4 += 1;
        }
    } while (valor >= 0);
    return contagem;
}


int funPot(int x, int y) {
    int final = 1;
    for (int i = 1; i <= y; i++) {
        final *= x;
    }
    return final;
}

int fibonacci(int n) {
    int termo1 = 0;
    int termo2 = 1;
    int proximo;
    int soma = 0;
    int i;

    if (n == 1) {
        printf("Termos: 0\n");
        return 0;
    }

    printf("Termos: 0, 1");
    soma = termo1 + termo2;

    for (i = 3; i <= n; i++) {
        proximo = termo1 + termo2;
        printf(", %d", proximo);
        soma   += proximo;
        termo1  = termo2;
        termo2  = proximo;
    }

    printf("\n");
    return soma;
}

void exercicio07() {
    int   idade;
    float salario;
    char  sexo;

    do {
        printf("Digite sua idade (0 a 150): ");
        scanf("%d", &idade);
        if (idade < 0 || idade > 150) {
            printf("Idade invalida! Tente novamente.\n");
        }
    } while (idade < 0 || idade > 150);

    do {
        printf("Digite seu salario (maior que 0): ");
        scanf("%f", &salario);
        if (salario <= 0) {
            printf("Salario invalido! Tente novamente.\n");
        }
    } while (salario <= 0);

    do {
        printf("Digite seu sexo (M ou F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f') {
            printf("Sexo invalido! Digite M ou F.\n");
        }
    } while (sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f');

    printf("Idade: %d | Salario: %.2f | Sexo: %c\n", idade, salario, sexo);
}

int ehPrimo(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void exercicio08() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (ehPrimo(numero)) {
        printf("%d E primo.\n", numero);
    } else {
        printf("%d NAO e primo.\n", numero);
    }
}

long long fatorial(int n) {
    long long resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void exercicio09() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Fatorial nao existe para numeros negativos.\n");
    } else {
        printf("%d! = %lld\n", n, fatorial(n));
    }
}

void exercicio10() {
    float nota, somaNotas = 0;
    int   qtdAlunos = 0, aprovados = 0;

    printf("(Digite -1 para encerrar)\n");
    do {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        if (nota == -1) break;
        if (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite entre 0 e 10.\n");
            continue;
        }
        somaNotas += nota;
        qtdAlunos++;
        if (nota >= 7.0) aprovados++;
    } while (nota != -1);

    if (qtdAlunos > 0) {
        printf("Media da turma:   %.2f\n", somaNotas / qtdAlunos);
        printf("Alunos aprovados: %d\n",   aprovados);
    } else {
        printf("Nenhuma nota inserida.\n");
    }
}

void exercicio11() {
    int   celsius;
    float fahrenheit;

    printf("Celsius\t\tFahrenheit\n");
    printf("------------------------------\n");
    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t\t%.2f\n", celsius, fahrenheit);
    }
}

void exercicio12() {
    int       numero, n, i;
    long long somaPares    = 0;
    float     somaImpares  = 0;
    int       qtdImpares   = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            somaImpares += numero;
            qtdImpares++;
        }
    }

    printf("Soma dos pares: %lld\n", somaPares);
    if (qtdImpares > 0) {
        printf("Media dos impares: %.2f\n", somaImpares / qtdImpares);
    } else {
        printf("Nenhum numero impar digitado.\n");
    }
}

void exercicio13() {
    int numeros[5];
    int i, j;

    for (i = 0; i < 5; i++) {
        do {
            printf("Digite o %d numero (1 a 20): ", i + 1);
            scanf("%d", &numeros[i]);
            if (numeros[i] < 1 || numeros[i] > 20) {
                printf("Valor invalido! Digite entre 1 e 20.\n");
            }
        } while (numeros[i] < 1 || numeros[i] > 20);
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Barra %d: ", i + 1);
        for (j = 0; j < numeros[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void exercicio14() {
    float numero, maior, menor;
    int   i;

    printf("Digite o 1 numero: ");
    scanf("%f", &numero);
    maior = numero;
    menor = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
    }

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
}

void exercicio15() {
    int   opcao;
    float a, b;

    do {
        printf("\n1. Somar\n2. Subtrair\n3. Multiplicar\n4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &a);
            printf("Digite o segundo numero: ");
            scanf("%f", &b);
        }

        if      (opcao == 1) printf("Resultado: %.2f\n", a + b);
        else if (opcao == 2) printf("Resultado: %.2f\n", a - b);
        else if (opcao == 3) printf("Resultado: %.2f\n", a * b);
        else if (opcao == 4) printf("Saindo...\n");
        else                 printf("Opcao invalida!\n");

    } while (opcao != 4);
}

void inverterNumero(int numero) {
    printf("Numero invertido: ");
    while (numero > 0) {
        printf("%d", numero % 10);
        numero /= 10;
    }
    printf("\n");
}

void exercicio16() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    inverterNumero(numero);
}

float calcularH(int n) {
    float h = 0;
    int   i;
    for (i = 1; i <= n; i++) {
        h += 1.0 / i;
    }
    return h;
}

void exercicio17() {
    int n;
    printf("Digite o numero de termos N: ");
    scanf("%d", &n);
    printf("H = %.4f\n", calcularH(n));
}

void exercicio18() {
    double coloniaA = 1000.0;
    double coloniaB =  200.0;
    int    horas    =    0;

    while (coloniaB <= coloniaA) {
        horas++;
        if (horas % 3 == 0) coloniaA *= 2.0;
        if (horas % 4 == 0) coloniaB *= 3.0;
    }

    printf("Colonia B ultrapassa Colonia A apos %d horas.\n", horas);
    printf("Colonia A: %.0f | Colonia B: %.0f\n", coloniaA, coloniaB);
}

int somaDigitos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma   += numero % 10;
        numero /= 10;
    }
    return soma;
}

void exercicio19() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    printf("Soma dos digitos de %d = %d\n", numero, somaDigitos(numero));
}

void exercicio20() {
    float a1, r, termo;
    int   n, i;

    printf("Digite o primeiro termo (a1): ");
    scanf("%f", &a1);
    printf("Digite a razao (r): ");
    scanf("%f", &r);
    printf("Digite a quantidade de termos (n): ");
    scanf("%d", &n);

    termo = a1;
    for (i = 1; i <= n; i++) {
        if (i < n) printf("%.2f, ", termo);
        else       printf("%.2f\n",  termo);
        termo *= r;
    }
}

int main(void) {
    int op;
    struct ResultadoEleicao dadosFinais;
    struct contagemIntervalos contagem;
    do {
        system("clear");
        printf("       -- Terceira Lista --    \n");
        printf("Escolha um exercicio (1 a 20) ou 0 para Sair: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                exercicio01();
                break;
            case 2:
                exercicio02();
                break;
            case 3:
                dadosFinais = exercicio03();
                printf("--Resultados Eleiçao--\n");
                printf("Total Candidato 1: %d\n", dadosFinais.cand1);
                printf("Total Candidato 2: %d\n", dadosFinais.cand2);
                printf("Total Candidato 3: %d\n", dadosFinais.cand3);
                printf("Total Candidato 4: %d\n", dadosFinais.cand4);
                printf("Total Nulos: %d\n", dadosFinais.nulos);
                printf("Total Brancos: %d\n", dadosFinais.brancos);
                break;
            case 4:
                contagem = exercicio04();
                printf("-- Resultados --\n");
                printf("Total Intervalo (0 - 25): %d\n", contagem.inter4);
                printf("Total Intervalo (25 - 50): %d\n", contagem.inter3);
                printf("Total Intervalo (51 - 75): %d\n", contagem.inter2);
                printf("Total Intervalo (76 - 100): %d\n", contagem.inter1);
                break;
            case 5:
                int x, y, resultado;
                printf("Digite o Valor de 'X':  \n");
                scanf("%d", &x);
                printf("Digite o Valor de 'Y':  \n");
                scanf("%d", &y);
                resultado = funPot(x, y);
                printf("O valor final é: %d ", resultado);
                break;
            case 6:
                int n;
                printf("Digite quantos termos: ");
                scanf("%d", &n);
                printf("Soma: %d\n", fibonacci(n));
                break;
            case 7:
                exercicio07();
                break;
            case 8:
                exercicio08();
                break;
            case 9:
                int fat;
                printf("Digite um numero: ");
                scanf("%d", &fat);
                printf("%d! = %lld\n", fat, fatorial(fat));
                break;
            case 10:
                exercicio10();
                break;
            case 11:
                exercicio11();
                break;
            case 12:
                exercicio12();
                break;
            case 13:
                exercicio13();
                break;
            case 14:
                exercicio14();
                break;
            case 15:
                exercicio15();
                break;
            case 16:
                exercicio16();
                break;
            case 17:
                exercicio17();
                break;
            case 18:
                exercicio18();
                break;
            case 19:
                exercicio19();
                break;
            case 20:
                exercicio20();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (op != 0);
    return 0;
}
