#include <stdio.h>

/*  
    Questão:
    Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre
    será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
    escreva um programa na linguagem que desejar onde, informado um número, ele calcule
    a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence
    ou não a sequência.
*/

/*  
    Resolução:
    Para resolver, eu criei uma função que calcula o n-ésimo termo da sequência de fibonacci
    e retorna esse termo. Tendo a função, eu peço ao usuário o valor que ele deseja verificar
    se está presente na sequência de fibonacci. De posse do número, criei uma iteração: enquanto
    o n-ésimo termo da sequência de fibonacci for menor que o número, irei calculando os termos
    da sequência de 1 por 1 começando do termo de número 0. O loop parará em duas situações: o
    termo da sequência é igual ao número informado pelo usuário, ou o termo da sequência é maior
    que o número informado pelo usuário. Aí, só verifico se é igual, e se for, exibo que o número
    está presente na sequência.
*/

// função que calcula o n-ésimo termo da sequência de fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;

    if (n == 1 || n == 2) return 1;

    int n_esimoTermo = 0, termoAnt = 1, termoAntAnt = 1, i = 3;

    while (i <= n) {
        n_esimoTermo = termoAnt + termoAntAnt;
        termoAntAnt = termoAnt;
        termoAnt = n_esimoTermo;
        i++;
    }

    return n_esimoTermo;
}

int main() {

    int num;

    printf("Digite o número:\n> ");
    scanf("%d", &num);

    // se o número for negativo, não está na sequência
    if (num < 0) {
        printf("O número %d não está na sequência de fibonacci", num);
    } else {

        int indice = 0;
        int termoFib = fibonacci(indice);

        // enquanto o termo atual da sequência for menor que o número informado pelo usuário, calculo o próximo
        while (termoFib < num) {
            indice++;
            termoFib = fibonacci(indice);
        }

        if (termoFib == num) {
            printf("O número %d está na sequência de fibonacci", num);
        } else {
            printf("O número %d não está na sequência de fibonacci", num);
        }
    }    

    return 0;
}

