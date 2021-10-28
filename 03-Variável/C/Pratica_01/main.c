/**Desenvolva um algoritmo que solicite do usuário algumas informações
 * e as exiba na tela, como um relatório
 * As informações são:
 * - nome
 * - idade
 * - sexo
 * - profissão
 * - salario
 */
#include <stdio.h>

int main() {
    // criação das variáveis
    char nome[50];
    int idade;
    char sexo;
    char profissao[50];
    float salario;

    // solicitação dos valores(ENTRADA)
    printf("Digite os seus dados.\n");

    // solicitação do nome
    printf("Nome: ");
    scanf("%s",&nome);
    fflush(stdin); // especificidade da linguagem c. Limpar o buffer de entrada

    // solicitação da idade
    printf("Idade: ");
    scanf("%d",&idade);
    fflush(stdin); // especificidade da linguagem c. Limpar o buffer de entrada

    // solicitação do sexo
    printf("Sexo: ");
    scanf("%c",&sexo);
    fflush(stdin); // especificidade da linguagem c. Limpar o buffer de entrada

    // solicitação da profissão
    printf("Profissao: ");
    scanf("%s",&profissao);
    fflush(stdin); // especificidade da linguagem c. Limpar o buffer de entrada

    // solicitação do salário
    printf("Salario: ");
    scanf("%f",&salario);
    fflush(stdin); // especificidade da linguagem c. Limpar o buffer de entrada

    // exibição na tela(SAÍDA)
    printf("\nOla, %s. Segue abaixo os seus dados.", nome);
    printf("\nidade: %d anos",idade);
    printf("\nsexo: %c",sexo);
    printf("\nProfissao: %s",profissao);
    printf("\nSalario: %0.2f",salario);

}