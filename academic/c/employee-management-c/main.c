// bibliotecas utilizadas
#include <stdio.h>
// entrada e saída padrão (printf, scanf)
#include <stdlib.h>
// usada para o system() que limpa o terminal
#include <string.h>
// usada para strcmp() na função buscar

// Função para cadastrar os novos funcionarios
void cadastrar(char nomes[][50], char emails[][30], float salarios[], int *qtd) {
    // como foi pedido que seja cadastrado no maximo 10 usuarios o if e responsavel por fazer isso
    // como o array começa pelo 0 e ele vai parar no 9, da um limite de 10 usuarios
    if (*qtd < 10) {
        printf("Digite o nome: ");
        scanf(" %49[^\n]", nomes[*qtd]);
        //"%49[^\n]" ignora espaços/enters sobrando, depois lê até 49 caracteres,
        //aceitando qualquer coisa (inclusive espaços), até encontrar o Enter
        printf("Digite o email: ");
        scanf(" %29[^\n]", emails[*qtd]);
        printf("Digite o salario: ");
        scanf(" %f", &salarios[*qtd]);
        (*qtd)++;
        // aki foi utilizado (*qtd)++ e não qtd++ porque precisamos aumentar o valor guardado no endereço,
        // não fazer o ponteiro apontar para a próxima posição de memória.
        //
        // detalhe: usei scanf por escutar que nao era pra usar fgets( escutei laercio conversando com alguem sobre )
        // usando o filtro "%49[^\n]" funciona perfeitamente sem o colateral do fgets de guardar o caractere de
        // quebra de linha (\n) junto da string.
        //
        //aki teria muitas formas de "pegar" esse valor fgets, gets, scanset
    } else {
        printf("Numero Maximo de cadastros atingidos");
    }
}

// Função para mostrar todos os cadastros
void mostrarTodos(char nomes[][50], char emails[][30], float salarios[], int qtd) {
    // filtro para ver se tem algum usuario cadastrado, se nao tiver ele nao executa a busca
    // se nao tiver pessoas cadastrada ele ja finaliza pra economizar memoria/tempo
    if (qtd == 0) {
        printf("Nenhum funcionário cadastrado ainda.\n");
    } else {
        for (int i = 0; i < qtd; i++) {
            printf("Indice: %d\n", i);
            printf("Nome: %s\n", nomes[i]);
            printf("E-mail: %s\n", emails[i]);
            printf("Salario: %.2f\n", salarios[i]);
        }
        printf("\n");

        printf("Funcionarios cadastrados: %d", qtd);
        // quantidade de cadastro fora do for para nao ficar repetindo a cada cadastro,
        // assim so e printado no final dos dados
    }
}

//Funcao responsavel por buscar e mostrar os dados
void buscar(char nomes[][50], char emails[][30], float salarios[], int qtd) {
    // Detalhe:  a variavel encontrado, funciona como um log, um retorno, basicamente ela vai ser responsavel por dizer
    // se o nome/cadastro NAO foi encontrado
    // ela começa com 0, que significa nao encontrado e so muda (para "1") apos encontrar o cadastro ser encontrado
    int encontrado = 0;

    if (qtd == 0) {
        printf("Nenhum funcionário cadastrado ainda.\n");
    } else {
        char nomeBusca[50];
        printf("Digite o nome completo: ");
        scanf(" %49[^\n]", nomeBusca);
        for (int i = 0; i < qtd; i++) {
            if (strcmp(nomes[i], nomeBusca) == 0) {
                printf("Nome: %s\n", nomes[i]);
                printf("E-mail: %s\n", emails[i]);
                printf("Salario: %.2f\n", salarios[i]);
                // se for encontrado ele muda a variavel pra 1 ( ta sendo utilizado basicamente como valor boolean
                // 1 para verdade/econtrado, 0 para nao encontrado//falso
                encontrado = 1;
            }
        }
        if (encontrado == 0) {
            // caso nao seja encontrado ele retorna
            printf("Funcionário não encontrado.\n");
        }
    }
}

//Funcao responsavel por mostrar o maior salario

// Detalhe: ate que se prove o contrario o primeiro cadastro (indice = 0) começa sendo o maior salario
// isso economiza 1 comparação, fica um pouco mais rapido, alem de evitar redundancia, pq evita comparar ele com ele mesmo
void maior(char nomes[][50], char emails[][30], float salarios[], int qtd) {

    if (qtd == 0) {
        printf("Nenhum funcionário cadastrado ainda.\n");
    } else {
        int indiceMaior = 0;
        for (int i = 1; i < qtd; i++) {
            if (salarios[i] > salarios[indiceMaior]) {
                indiceMaior = i;
                // Outro detalhe, aki e guardado o indice(nao o valor do indice), porque assim no final
                // conseguimos acessar nome, email e salário da mesma pessoa usando esse único índice.
            }
        }
        // aki:
        printf("Indice: %d\n", indiceMaior);
        printf("Nome: %s\n", nomes[indiceMaior]);
        printf("E-mail: %s\n", emails[indiceMaior]);
        printf("Salario: %.2f\n", salarios[indiceMaior]);
        // como guardamos o indice do maior salario e bem mais simples consultar os dados
    }
}

// função responsavel por mostrar a media de salarios
// aki nao e necessario passar como parametro nomes e emails, deixei
// porque o enunciado pede (Cada opção deve,obrigatoriamente, chamar uma função
// específica passando as matrizes e vetores como parâmetros.)
void media(char nomes[][50], char emails[][30], float salarios[], int qtd) {

    if (qtd == 0) {
        printf("Nenhum funcionário cadastrado ainda.\n");
    } else {
        float valores = 0, mediaFinal;
        for (int i = 0; i < qtd; i++) {
            valores += salarios[i];
        }
        mediaFinal = valores / qtd;
        // como temos essa variavel qtd, que so e mudada quando e cadastrado 1 pessoa
        // fica seguro usar ela pra tirar a media.
        printf("A media e: %.2f", mediaFinal);
    }
}

int main(void) {
    //variaveis Utilzadas
    char nomes[10][50];
    char email[10][30];
    float salario[10];
    int op, qtd = 0;
    // op nao esta zerada por conta do do-while(que verifica depois)
    do {
        // Para melhor organização do codigo(na hora de iniciar eu utilizei esse simples sisteminha de limpeza
        // basicamente ele vai decidir atravez do if se voce esta no windows ou linux, e vai limpar o console
        //
        // DETALHE: Dependendo do terminal que voce usar isso nao funciona, se voce usar o terminal
        // proprio do linux ou windows, funciona, entretanto dependendo da ide nao vai funcionar( exemplo no clion)
        // nao funciona por conta do terminal da ide ( meio que essas ide simula um terminal)
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        //menu aesthetic
        printf("-- Sistema de Cadastro é Agenda -- \n");
        printf("* 1 Para Cadastrar Novo Funcionario \n");
        printf("* 2 para Mostrar Todos os Dados \n");
        printf("* 3 para Buscar Dados de uma Pessoa Específica \n");
        printf("* 4 Mostrar Maior Salario \n");
        printf("* 5 Mostrar Media Salarial \n");
        printf("** 6  Para Sair ** \n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                cadastrar(nomes, email, salario, &qtd);
                // detalhe esse possui &qtd, ao contrario dos outros, pq esse e reponsavel por mudar
                // os valors de qtd( quantidade de pessoas cadastradas), ja os outros so consultam
                break;
            case 2:
                mostrarTodos(nomes, email, salario, qtd);
                // como esse so consulta qtd nao necessita do "&"
                break;
            case 3:
                buscar(nomes, email, salario, qtd);
                // essa linha so entrega os dados e chama a função, os printf que aparecem
                // na tela estao dentro do corpo da função buscar(), la em cima no arquivo
                break;
            case 4:
                maior(nomes, email, salario, qtd);
                break;
            case 5:
                media(nomes, email, salario, qtd);
                break;
            default:
                if (op == 6) {
                    printf("Saindo ... \n");
                } else {
                    printf("Opçao Invalida \n");
                }
                // responsavel por retornar log, caso a pessoa digite qualquer valor que nao seja entre 0-6
                //
                // Detalhe: o if tem função de melhor visualizaçã do que esta acontecendo
                // se nao tivesse, so tivesse "printf("Opçao Invalida \n");" e a pessoa apertaçe 6 para sair
                // ele ia falar opção invalida e finalizar, com esse if caso a pessoa aperta 6, ele printa Saindo
                // basicamente o if, so esta deixando mais visivel oque esta acontecendo
                break;
        }
        printf("\nPressione Enter para continuar...");
        getchar();
        getchar();
        // Explicação: Sem essa pausa, o loop já reimprimiria o menu na sequência, sem dar tempo
        // de ler o resultado da opção escolhida.
        //
        // Utilizei getchar() (funciona em qualquer sistema, ide, não depende do SO) em vez de sleep() ou
        // system("pause"), que necessitaria saber antecipadamente se o programa
        // vai rodar em Windows ou Linux ( pode ser que ocorra algum erro desnecessario )
        //
        // São necessários DOIS getchar() o primeiro consome o "\n" deixado no
        // buffer pelo scanf anterior e o segundo é quem realmente espera o
        // usuário apertar Enter para continuar.
    } while (op != 6);

    // decidir utilizar o do while por ele consultar no final
    //
    // alem de ser mais estetico(nao sei por que eu gosto muito do do-while)
    return 0;
}
