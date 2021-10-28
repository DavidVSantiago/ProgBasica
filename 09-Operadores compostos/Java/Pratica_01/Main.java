/** Faça um programa que leia o valor de um produto e imprima
 * o valor com desconto, tendo em vista que o desconto foi de 12%.
 **/

 import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        // declaração das variáveis
        double valor;

        // obtenção dos valores (ENTRADA)
        Scanner reader = new Scanner(System.in);
        System.out.print("Digite o valor do produto: R$");
        valor = reader.nextDouble();

        // cálculo do desconto (PROCESSAMENTO)
        valor -= (valor*0.12);
        //valor = valor - (valor*0.12);

        // exibição do valor descontado (SAÍDA)
        System.out.println("\nValor descontado: R$"+valor);
    }
}