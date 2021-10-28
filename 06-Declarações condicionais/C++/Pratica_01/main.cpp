/** Faça um programa que calcule a aprovação eu reprovação de um aluno.
 *  O programa deve receber como entrada:
 *  - nota da 1ª prova (peso de 30%)
 *  - nota da 2ª prova (peso de 50%)
 *  - nota do trabalho (peso de 20%)
 *  Com base nas entradas, o programa deve calcular a média ponderada
 *  O programa deve exibir como SAÍDA:
 *  - A mensagem: "APROVADO!", caso a média seja igual ou maior que 7
 *  - A mensagem: "REPROVADO!", caso a média seja menor que 7
 */

#include <iostream>

int main() {
    // declaração das variáveis
    float nota1;
    float nota2;
    float notaTrabalho;
    float media;

    // obtenção das notas (ENTRADA)
    std::cout << "Digite a nota da 1a prova: "; // saída padrão
    std::cin >> nota1; // entrada padrão
    std::cout << "Digite a nota da 2a prova: "; // saída padrão
    std::cin >> nota2; // entrada padrão
    std::cout << "Digite a nota do trabalho: "; // saída padrão
    std::cin >> notaTrabalho; // entrada padrão

    // cálculo da média (PROCESSAMENTO)
    media = (nota1*0.3) + (nota2*0.5) + (notaTrabalho*0.2);

    // exibição do resultado (SAÍDA)
    std::cout << "\nMedia = " << media << std::endl;
    if(media < 7){ // se a média é menor que 7
        std::cout << "REPROVADO!";
    }else{ // caso contrário
        std::cout << "APROVADO!";
    }
}