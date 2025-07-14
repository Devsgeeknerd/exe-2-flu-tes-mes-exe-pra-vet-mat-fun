/* 
 * Programa de Análise de Vetor
 * Descrição: Programa que lê 5 números inteiros, encontra o maior, menor e calcula a média
 * Linguagem: C
 * Compilador: GCC
 * Funcionalidades:
 *  - Entrada de 5 números
 *  - Identificação do maior número
 *  - Identificação do menor número
 *  - Cálculo da média
 * Data de criação: [Data atual]
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    // Exibir os caracteres no terminal em Português.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis.
    int vetor[5];     // Vetor para armazenar 5 números inteiros.
    int maior;        // Variável para armazenar o maior número.
    int menor;        // Variável para armazenar o menor número.
    float media;      // Variável para armazenar a média dos números.
    float soma = 0;   // Variável para calcular a soma dos números.

    // Laço para entrada de dados no vetor.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor.
    maior = vetor[0];
    menor = vetor[0];

    // Laço para encontrar o maior, menor e calcular a soma.
    for (int i = 0; i < 5; i++)
    {
        // Atualiza o maior número se encontrar um valor maior.
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        // Atualiza o menor número se encontrar um valor menor.
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        // Acumula a soma dos números.
        soma = soma + vetor[i];
    }

    // Calcula a média dividindo a soma pelo número de elementos.
    media = soma / 5;

    // Exibe os resultados.
    printf("O maior valor armazenado é: %d", maior);
    printf("\nO menor valor armazenado é: %d", menor);
    printf("\nA media é: %0.2f", media);
    return 0;
}
