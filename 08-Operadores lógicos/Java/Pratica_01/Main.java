/** Faça um programa que leia do usuário o valor da quantidade de
 * calorias consumidas por dia.
 *  O programa deve verificar se a quantidade de calorias se encontra
 * na faixa de segurança - entre 1200 e 1900 cal.(incluíndo ambos) por dia
 *  O programa deve exibir como saída uma das duas informações:
 *  - Ou exibe "Dentro da faixa", para qtd. de calorias entre 1200 e 1900.
 *  - Ou, caso contrário, exibe "Fora da faixa". 
 **/

import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        // declaração das variáveis
        int calorias;

        // solicitação dos valores (ENTRADA)
        System.out.println("Digite a qtd. de calorias consumidas por dia: ");
        Scanner reader = new Scanner(System.in);
        calorias = reader.nextInt();

        // verificação da faixa (PROCESSAMENTO E SAÍDA)
        if(calorias >= 1200 && calorias <= 1900){ // verifica a faixa das calorias
            System.out.println("Dentro da faixa");
        }else{ // caso contrário
            System.out.println("Fora da faixa");
        }
    }
}