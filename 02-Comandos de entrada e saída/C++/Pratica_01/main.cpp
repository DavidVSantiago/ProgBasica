#include <iostream>

int main() {

    std::cout << "Digite o seu nome: "; // saída padrão. Impressão no monitor
    
    char user[50]; // local que armazena um nome com, no mínimo, 50 caracteres.
    std::cin >> user; // entrada padrão. Captura o que foi digitado pelo usuário no teclado

    std::cout << "Ola, " << user << ". Seja bem vindo!" << std::endl;
    return 0;
}