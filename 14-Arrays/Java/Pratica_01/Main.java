/** Faça um programa para calcular a média aritmética
 * de uma série de n temperaturas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de temperaturas
 * a serem digitadas, bem como cada uma das n temperaturas.
 *  O programa deve armazenar as temperaturas em um array.
 *  Como saída, o programa deve exibir a média das n temperaturas digitadas
**/

import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        // declaração das variáveis
        int n;
        double media = 0.0;

        // solicitação dos valores (ENTRADA)
        Scanner reader = new Scanner(System.in);
        System.out.print("Digite a quantidade de temperaturas: ");
        n = reader.nextInt();
        double[] temperaturas = new double[n]; // inicializando o array
        for(int i=0; i<n; i++){ // percorre as n posições do array
            System.out.print("Digite a temperatura "+(i+1)+": ");
            temperaturas[i] = reader.nextDouble(); // recebe cada uma das temperaturas
        }

        // cálculo da média (PROCESSAMENTO)
        for(int i=0; i<n; i++){ // percorre as n posições do array
            media = media + temperaturas[i];
        }
        media = media/n;

        // exibição da média (SAÍDA)
        System.out.println("\nA media das temperaturas = "+media);
    }
}