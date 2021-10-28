/** Escreva um programa que implemente uma função que receba
 * como parâmetro o raio de uma esfera, e retorne o volume dessa esfera.
 *  O programa deve receber como ENTRADA o raio da esfera
 * e exibir como SAÍDA o volume da esfera. 
 * Fórmula: volume=(4*π*raio³)/3
 **/

#include <iostream>
#include <cmath>

float calculaVolume(float r){
    float v = (4*M_PI*pow(r,3)) / 3;
    return v;
}

int main() {
    // declaração das variáveis
    float raio;
    float volume;

    // solicitação dos valores (ENTRADA)
    std::cout << "Digite o raio da esfera (em metros): ";
    std::cin >> raio;

    // cálculo do volume (PROCESSAMENTO)
    volume = calculaVolume(raio);

    // exibição do volume (SAÍDA)
    std::cout << "\nVolume da esfera: " << volume;
}