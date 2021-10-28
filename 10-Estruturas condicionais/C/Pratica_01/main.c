/** Faça um programa que leia o valor do salário bruto mensal do usuário
 * e calcule o IMPOSTO DE RENDA a ser pago, com base em 5 faixas:
 *  - faixa 1 - abaixo de R$1.903,99 = Isento (não paga)
 *  - faixa 2 - de R$1.903,99 a R$2.826,65 = 7,5% menos dedução de R$142,80
 *  - faixa 3 - de R$2.826,66 a R$3.751,05 = 15% menos dedução de R$354,80
 *  - faixa 4 - de R$3.751,06 a R$4.664,68 = 22,5% menos dedução de R$636,13
 *  - faixa 5 - acima de R$ 4.664,68 = 27,5% menos dedução de R$869,36
 *  
 *  O programa deve exibir como saída:
 *  - O valor da alíquota de imposto
 *  - O valor mensal do imposto a ser pago
 *  - O valor anual do imposto a ser pago
 **/

#include <stdio.h>

int main(){
    // declaração das variáveis
    float salario;
    float aliquota;
    float deducao;
    float impostoMensal;
    float impostoAnual;

    // obtenção dos valores (ENTRADA)
    printf("Digite o salario bruto mensal: R$");
    scanf("%f",&salario);

    // cálculo do imposto (PROCESSAMENTO)
    if(salario > 4664.68){ // faixa 5
        aliquota = 27.5;
        deducao = 869.36;
    }else if(salario <= 4664.68 && salario >= 3751.06){ // faixa 4
        aliquota = 22.5;
        deducao = 636.13;
    }else if(salario <= 3751.05 && salario >= 2826.66){ // faixa 3
        aliquota = 15;
        deducao = 354.80;
    }else if(salario <= 2826.65 && salario >= 1903.99){ // faixa 2
        aliquota = 7.5;
        deducao = 142.80;
    }else{ // faixa 1
        aliquota = 0;
        deducao = 0;
    }
    impostoMensal = salario * (aliquota/100) - deducao;
    impostoAnual = impostoMensal*12;

    // exibição dos resultados (SAÍDA)
    printf("\nSalario: R$%0.2f\n",salario);
    printf("Aliquota: %0.2f%%\n",aliquota);
    printf("Imposto mensal: R$%0.2f\n",impostoMensal);
    printf("Imposto anual: R$%0.2f\n",impostoAnual);
}