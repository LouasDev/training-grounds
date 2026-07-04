# 📋 Sistema de Cadastro e Agenda de Funcionários

Programa em linguagem C que simula um sistema de cadastro e gerenciamento de funcionários, utilizando matrizes e vetores paralelos para armazenar os dados de até 10 pessoas.

Trabalho prático desenvolvido para a disciplina de Programação em C — IFNMG.

## 🎯 Funcionalidades

O sistema oferece um menu interativo com as seguintes opções:

1. **Cadastrar Novo Funcionário** — adiciona nome, e-mail e salário, respeitando o limite de 10 cadastros.
2. **Mostrar Todos os Dados** — lista índice, nome, e-mail e salário de todos os funcionários cadastrados.
3. **Buscar Dados de uma Pessoa Específica** — busca por nome completo utilizando `strcmp`.
4. **Mostrar Maior Salário** — percorre os salários cadastrados e exibe nome e valor do maior.
5. **Mostrar Média Salarial** — calcula a média aritmética dos salários cadastrados.
6. **Sair** — encerra o programa.

## 🗂️ Estrutura de Dados

Seguindo os requisitos do trabalho, as estruturas são declaradas **dentro da `main()`**, sem uso de `struct` ou variáveis globais:

| Dado      | Tipo                | Tamanho                          |
|-----------|---------------------|-----------------------------------|
| Nome      | `char[10][50]`       | 10 nomes de até 49 caracteres     |
| E-mail    | `char[10][30]`       | 10 e-mails de até 29 caracteres   |
| Salário   | `float[10]`          | 10 valores de ponto flutuante     |

Cada opção do menu chama uma função específica, que recebe essas estruturas como parâmetro (matrizes e vetores paralelos).

## ⚙️ Como compilar e executar

### Linux / macOS
```bash
gcc main.c -o sistema
./sistema
```

### Windows (usando MinGW/gcc)
```bash
gcc main.c -o sistema.exe
sistema.exe
```

> 💡 O programa limpa o terminal automaticamente entre as interações, adaptando o comando (`clear` ou `cls`) conforme o sistema operacional detectado na compilação.

## 🧠 Conceitos aplicados

- Matrizes e vetores paralelos como alternativa ao uso de `struct`
- Passagem de matrizes/vetores por referência para funções
- Ponteiros (`int *qtd`) para permitir que uma função altere uma variável do `main()`
- Manipulação de strings com `strcmp` (busca) e `scanf` com scanset (`%[^\n]`) para leitura de nomes com espaço
- Validações de agenda vazia e agenda cheia

## 👤 Autor

Desenvolvido por **Luis Gustavo M. Borges** ([@LouasDev](https://github.com/LouasDev))
