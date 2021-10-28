/** Escreva um programa que implemente uma função que receba
 * como parâmetro o raio de uma esfera, e retorne o volume dessa esfera.
 *  O programa deve receber como ENTRADA o raio da esfera
 * e exibir como SAÍDA o volume da esfera. 
 * Fórmula: volume=(4*π*raio³)/3
 **/

#include <stdio.h>
#include <math.h>

float calculaVolume(float r){
    float v = (4*M_PI*pow(r,3)) / 3;
    return v;
}

int main() {
    // declaração das variáveis
    float raio;
    float volume;

    // solicitação dos valores (ENTRADA)
    printf("Digite o raio da esfera (em metros): ");
    scanf("%f",&raio);

    // cálculo do volume (PROCESSAMENTO)
    volume = calculaVolume(raio);

    // exibição do volume (SAÍDA)
    printf("\nVolume da esfera: %0.2f",volume);
}