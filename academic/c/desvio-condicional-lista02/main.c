#include <stdio.h>
#include <stdbool.h>

int verificarMaiorTres_Q3(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}

bool checarAprovacao(float n1, float n2, float n3, float n4) {
    float media = (n1 + n2 + n3 + n4) / 4;
    if (media >= 6) {
        return true;
    } else {
        return false;
    }
}

int verificarDiasMes(int mes, int ano) {
    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    } else {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            return 30;
        } else {
            if (mes >= 1 && mes <= 12) {
                return 31;
            } else {
                return 0;
            }
        }
    }
}

char conceitoFinal(float nota) {
    if (nota >= 90) {
        return 'A';
    } else {
        if (nota >= 80) {
            return 'B';
        } else {
            if (nota >= 70) {
                return 'C';
            } else {
                if (nota >= 60) {
                    return 'D';
                } else {
                    return 'F';
                }
            }
        }
    }
}

int verificarMaiorTres_Q18(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}

float calcularValorCompra(float valor, int codigo) {
    if (codigo == 1) {
        return valor * 0.85;
    } else {
        if (codigo == 2) {
            return valor * 0.95;
        } else {
            if (codigo == 3) {
                return valor;
            } else {
                if (codigo == 4) {
                    return valor * 1.10;
                } else {
                    return -1;
                }
            }
        }
    }
}
int main() {
    int escolha;
    int num1, num2, num3, idade, anoN, anoA;
    float v1, v2, v3, v4, resultado;
    char letra, sexo;

    printf("Digite o numero do exercicio (1-20):\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite o segundo numero:\n");
            scanf("%d", &num2);
            if (num1 > num2) {
                printf("%d\n", num1 - num2);
            } else {
                printf("%d\n", num2 - num1);
            }
            break;

        case 2:
            printf("Digite o sexo (M/F):\n");
            scanf(" %c", &letra);
            if (letra == 'M' || letra == 'm') {
                printf("Sexo valido!\n");
            } else {
                if (letra == 'F' || letra == 'f') {
                    printf("Sexo valido!\n");
                } else {
                    printf("Sexo invalido!\n");
                }
            }
            break;

        case 3:
            printf("Digite o numero 1:\n");
            scanf("%d", &num1);
            printf("Digite o numero 2:\n");
            scanf("%d", &num2);
            printf("Digite o numero 3:\n");
            scanf("%d", &num3);
            num1 = verificarMaiorTres_Q3(num1, num2, num3);
            printf("%d\n", num1);
            break;

        case 4:
            printf("Digite a nota 1:\n");
            scanf("%f", &v1);
            printf("Digite a nota 2:\n");
            scanf("%f", &v2);
            printf("Digite a nota 3:\n");
            scanf("%f", &v3);
            printf("Digite a nota 4:\n");
            scanf("%f", &v4);
            printf("Digite o sexo (M/F):\n");
            scanf(" %c", &sexo);
            if (checarAprovacao(v1, v2, v3, v4)) {
                if (sexo == 'F' || sexo == 'f') { printf("Aprovada\n"); }
                else { printf("Aprovado\n"); }
            } else {
                if (sexo == 'F' || sexo == 'f') { printf("Reprovada\n"); }
                else { printf("Reprovado\n"); }
            }
            break;

        case 5:
            printf("Qual sua Qualificacao (G, M, D):\n");
            scanf(" %c", &letra);
            printf("Horas Trabalhadas:\n");
            scanf("%f", &v1);
            if (letra == 'G' || letra == 'g') {
                printf("%.2f\n", v1 * 12);
            } else {
                if (letra == 'M' || letra == 'm') {
                    printf("%.2f\n", v1 * 17);
                } else {
                    if (letra == 'D' || letra == 'd') {
                        printf("%.2f\n", v1 * 25);
                    } else {
                        printf("Invalido\n");
                    }
                }
            }
            break;

        case 6:
            printf("Lado 1:\n");
            scanf("%f", &v1);
            printf("Lado 2:\n");
            scanf("%f", &v2);
            printf("Lado 3:\n");
            scanf("%f", &v3);
            if (v1 < v2 + v3 && v2 < v1 + v3 && v3 < v1 + v2) {
                if (v1 == v2) {
                    if (v2 == v3) { printf("Equilatero\n"); }
                    else { printf("Isosceles\n"); }
                } else {
                    if (v1 == v3 || v2 == v3) { printf("Isosceles\n"); }
                    else { printf("Escaleno\n"); }
                }
            } else {
                printf("Nao e triangulo\n");
            }
            break;

        case 7:
            printf("Preco do Carro:\n");
            scanf("%f", &v1);
            printf("Ano do Carro:\n");
            scanf("%d", &num1);
            if (num1 < 1990) {
                printf("%.2f\n", v1 * 0.01);
            } else {
                printf("%.2f\n", v1 * 0.015);
            }
            break;

        case 8:
            printf("Idade:\n");
            scanf("%d", &idade);
            if (idade >= 18) { printf("Adulto\n"); }
            else {
                if (idade >= 14) { printf("Juvenil B\n"); }
                else {
                    if (idade >= 11) { printf("Juvenil A\n"); }
                    else {
                        if (idade >= 8) { printf("Infantil B\n"); }
                        else {
                            if (idade >= 5) { printf("Infantil A\n"); }
                            else { printf("Voce nao tem Categoria categoria\n"); }
                        }
                    }
                }
            }
            break;

        case 9:
            printf("Qual o Preco:\n");
            scanf("%f", &v1);
            printf("Qual o Codigo (1-5):\n");
            scanf("%d", &num1);
            if (num1 == 1) {
                printf("%.2f\n", v1 * 1.10);
            }
            else {
                if (num1 == 2) {
                    printf("%.2f\n", v1 * 1.15);
                }
                else {
                    if (num1 == 3) {
                        printf("%.2f\n", v1 * 1.08);
                    }
                    else {
                        if (num1 == 4) {
                            printf("%.2f\n", v1 * 1.12);
                        }
                        else {
                            if (num1 == 5) {
                                printf("%.2f\n", v1 * 1.25);
                            }
                            else {
                                printf("Invalido\n");
                            }
                        }
                    }
                }
            }
            break;

        case 10:
            printf("Saldo:\n");
            scanf("%f", &v1);
            if (v1 <= 200) { v2 = 0; }
            else {
                if (v1 <= 400) {
                    v2 = v1 * 0.10;
                }
                else {
                    if (v1 <= 600) {
                        v2 = v1 * 0.30;
                    }
                    else {
                        v2 = v1 * 0.40;
                    }
                }
            }
            printf("%.2f %.2f\n", v1, v2);
            break;

        case 11:
            printf("Nota 1:\n");
            scanf("%f", &v1);
            printf("Nota 2:\n");
            scanf("%f", &v2);
            printf("Nota 3:\n");
            scanf("%f", &v3);
            resultado = (v1 * 2 + v2 * 3 + v3 * 5) / 10;
            if (resultado >= 7) {
                printf("Aprovado %.2f\n", resultado);
            }
            else {
                if (resultado >= 5) {
                    printf("Recuperacao %.2f\n", resultado);
                }
                else {
                    printf("Reprovado %.2f\n", resultado);
                }
            }
            break;

        case 12:
            printf("Valor 1:\n");
            scanf("%f", &v1);
            printf("Valor 2:\n");
            scanf("%f", &v2);
            printf("Operacao:\n");
            scanf(" %c", &letra);
            switch (letra) {
                case '+':
                    printf("%.2f\n", v1 + v2);
                    break;
                case '-':
                    printf("%.2f\n", v1 - v2);
                    break;
                case '*':
                    printf("%.2f\n", v1 * v2);
                    break;
                case '/':
                    if (v2 != 0) {
                        printf("%.2f\n", v1 / v2);
                    }
                    else { printf("Erro\n"); }
                    break;
            }
            break;

        case 13:
            printf("Digite o mes:\n");
            scanf("%d", &num1);
            printf("Digite o ano:\n");
            scanf("%d", &num2);
            num3 = verificarDiasMes(num1, num2);
            if (num3 != 0) {
                printf("Dias: %d\n", num3);
            } else {
                printf("Mes invalido\n");
            }
            break;

        case 14:
            printf("Renda mensal:\n");
            scanf("%f", &v1);
            printf("Valor da parcela:\n");
            scanf("%f", &v2);
            printf("Numero de parcelas:\n");
            scanf("%d", &num2);
            printf("Sua idade:\n");
            scanf("%d", &num1);
            if (v2 > v1 * 0.30) {
                printf("Credito negado\n");
            } else {
                if (num1 < 25) {
                    printf("Credito negado por idade\n");
                } else {
                    printf("Credito aprovado\n");
                }
            }
            break;

        case 15:
            printf("Codigo do item (100 a 105):\n");
            scanf("%d", &num1);
            switch (num1) {
                case 100:
                    printf("Cachorro Quente R$5,00\n");
                    break;
                case 101:
                    printf("Bauru R$8,00\n");
                    break;
                case 102:
                    printf("Hamburguer R$12,00\n");
                    break;
                case 103:
                    printf("Gato assado R$9,00\n");
                    break;
                case 104:
                    printf("Coelho frito R$12,00\n");
                    break;
                case 105:
                    printf("Hamburguer R$12,00\n");
                    break;
                default:
                    printf("Produto Invalido\n");
                    break;
            }
            break;

        case 16:
            printf("Nota:\n");
            scanf("%f", &v1);
            letra = conceitoFinal(v1);
            printf("%c\n", letra);
            break;
        case 17:
            printf("Dia:\n");
            scanf("%d", &num1);
            if (num1 == 1) {
                printf("Domingo\n");
            }
            else {
                if (num1 == 2) {
                    printf("Segunda\n");
                }
                else {
                    if (num1 == 3) {
                        printf("Terca\n");
                    }
                    else {
                        if (num1 == 4) {
                            printf("Quarta\n");
                        }
                        else {
                            if (num1 == 5) {
                                printf("Quinta\n");
                            }
                            else {
                                if (num1 == 6) {
                                    printf("Sexta\n");
                                }
                                else {
                                    if (num1 == 7) {
                                        printf("Sabado\n");
                                    }
                                    else {
                                        printf("Invalido\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 18:
            printf("Valor 1:\n");
            scanf("%d", &num1);
            printf("Valor 2:\n");
            scanf("%d", &num2);
            printf("Valor 3:\n");
            scanf("%d", &num3);
            num1 = verificarMaiorTres_Q18(num1, num2, num3);
            printf("%d\n", num1);
            break;

        case 19:
            printf("Ano de Nascimento:\n");
            scanf("%d", &anoN);
            printf("Ano Atual:\n");
            scanf("%d", &anoA);
            num1 = anoA - anoN;
            if (num1 >= 16) {
                printf("Ja Pode Vota\n");
                if (num1 >= 18) { printf("Ja Pode Dirige\n"); }
            } else {
                printf("Pode Fazer Nada\n");
            }
            break;

        case 20:
            printf("Valor da Compra:\n");
            scanf("%f", &v1);
            printf("Codigo de Pagamento:\n");
            scanf("%d", &num1);
            v2 = calcularValorCompra(v1, num1);
            if (v2 != -1) {
                printf("%.2f\n", v2);
            } else {
                printf("Codigo invalido\n");
            }
            break;
    }

    return 0;
}