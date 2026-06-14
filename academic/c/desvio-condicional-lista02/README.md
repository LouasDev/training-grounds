# Segunda Lista de Exercícios - Desvio Condicional

**Disciplina:** Introdução à Ciência da Computação
**Linguagem:** C
**Tema:** Desvio condicional (if/else, aninhados e switch case)

## Enunciados

1. Ler dois números inteiros e mostrar a diferença do maior pelo menor.

2. Ler o sexo de uma pessoa (M ou F). Se válido, exibir "Sexo válido!", senão "Sexo inválido!".

3. Função que recebe 3 números e retorna o maior deles.

4. Ler 4 notas e o sexo (M/F). Calcular a média e exibir "Aprovada/Aprovado" (média >= 6) ou "Reprovada/Reprovado".

5. Calcular o salário de um professor por hora/aula conforme qualificação:
   - Graduado: R$12,00/hora
   - Mestre: R$17,00/hora
   - Doutor: R$25,00/hora

6. Dados três valores X, Y e Z, verificar se formam um triângulo e classificar em equilátero, isósceles ou escaleno.

7. Calcular o imposto de transferência de veículo: 1% (antes de 1990) ou 1.5% (1990 em diante) sobre o valor do carro.

8. Classificar um nadador por idade:
   - Infantil A (5-7), Infantil B (8-10), Juvenil A (11-13), Juvenil B (14-17), Adulto (18+)

9. Calcular o preço final de um produto com imposto conforme procedência (código 1 a 5: 10%, 15%, 8%, 12%, 25%).

10. Calcular crédito especial conforme saldo médio:
    - 0-200: nenhum | 201-400: 10% | 401-600: 30% | acima de 601: 40%

11. Calcular média ponderada (pesos 2, 3, 5) e classificar: Aprovado (>=7), Recuperação (5-7), Reprovado (<5).

12. Calculadora simples com switch case (+, -, *, /), tratando divisão por zero.

13. Função `verificarDiasMes` que retorna a quantidade de dias de um mês, considerando anos bissextos.

14. Sistema de análise de crédito: nega se parcela > 30% da renda ou se idade < 25 anos.

15. Menu Drive-Thru: exibir nome e valor do produto conforme código (100-105), ou "Produto Inválido".

16. Função `conceitoFinal` que retorna A, B, C, D ou F conforme a nota (0-100).

17. Ler um número de 1 a 7 e exibir o dia da semana correspondente (1-Domingo a 7-Sábado).

18. Função que recebe 3 valores e retorna o maior, usando apenas desvios condicionais.

19. Ler ano de nascimento e ano atual; verificar se a pessoa pode votar (16+) e dirigir (18+).

20. Função que calcula o valor final de uma compra conforme código de pagamento:
    - 1: 15% desconto | 2: 5% desconto | 3: preço normal | 4: 10% juros

## Como executar

```bash
mkdir -p cmake-build-debug
cd cmake-build-debug
cmake ..
make
./Segunda-Lista
```

Ao executar, o programa pede o número do exercício (1-20) e solicita os dados necessários.
