/**Desenvolva um algoritmo que solicite do usuário algumas informações e as exiba na tela, como um relatório
 * As informações são:
 * - nome
 * - idade
 * - sexo
 * - profissão
 * - salario
 */
#include <iostream>
int main() {
    //criação das variáveis
    char nome[50];
    int idade;
    char sexo;
    char profissao[50];
    float salario;

    //solicitação dos valores(ENTRADA)
    std::cout << "Digite os seus dados." << std::endl;

    // solicitação do nome
    std::cout << "Nome: ";
    std::cin >> nome;

    // solicitação do idade
    std::cout << "Idade: ";
    std::cin >> idade;

    // solicitação do sexo
    std::cout << "Sexo: ";
    std::cin >> sexo;

    // solicitação do profissão
    std::cout << "Profissao: ";
    std::cin >> profissao;

    // solicitação do salario
    std::cout << "Salario: ";
    std::cin >> salario;

    // exibição na tela (SAÍDA)
    std::cout << "\nOla, " << nome << ". Segue abaixo os seus dados.";
    std::cout << "\nIdade: " << idade << " anos.";
    std::cout << "\nSexo: " << sexo;
    std::cout << "\nProfissao: " << profissao;
    std::cout << "\nSalario: " << salario;
}