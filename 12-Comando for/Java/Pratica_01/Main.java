/** Faça um programa para calcular a média aritmética
 * de uma série de n notas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de notas
 * a serem digitadas, bem como cada uma das n notas.
 *  Como saída, o programa deve exibir a média das n notas digitadas
 **/
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        // declaração das variáveis
        int n;
        double media = 0;

        // solicitação das notas (ENTRADA E PROCESSAMENTO)
        Scanner reader = new Scanner(System.in);
        System.out.print("Digite a quantidade de notas: ");
        n = reader.nextInt();

        for(int i=0; i<n; i++){ // repete n vezes
            System.out.print("Digite a nota "+(i+1)+": ");
            double nota = reader.nextDouble();
            media = media + nota; // acumula cada uma das notas
        }
        media = media/n; // dividimos por n para calcular a média

        // exibição da média (SAÍDA)
        System.out.println("\nMedia: "+media);
    }
}