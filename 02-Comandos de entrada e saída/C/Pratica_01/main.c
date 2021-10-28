#include <stdio.h>

int main() {

    printf("Digite o seu nome: "); // saída padrão. Impressão no monitor

    char user[50]; // local que armazena um nome com, no máximo, 50 caracteres.
    scanf("%s",&user); // entrada padrão. capturar o que foi digitado pelo usuário no teclado.

    printf("Ola, %s. Seja bem vindo!",user);
    return 0;
}
