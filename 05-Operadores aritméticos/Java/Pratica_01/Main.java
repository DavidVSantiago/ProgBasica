/** Desenvolva um algoritmo que receba como entrada 4 notas de um aluno
  * e exiba como saída a média desse aluno.
 */
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
      // declaração das variáveis
      double nota1;
      double nota2;
      double nota3;
      double nota4;
      double media;

      // obtenção das notas (ENTRADA)
      Scanner reader = new Scanner(System.in);
      System.out.print("Digite a nota 01: ");
      nota1 = reader.nextDouble(); // obter o valor do teclado

      System.out.print("Digite a nota 02: ");
      nota2 = reader.nextDouble(); // obter o valor do teclado

      System.out.print("Digite a nota 03: ");
      nota3 = reader.nextDouble(); // obter o valor do teclado

      System.out.print("Digite a nota 04: ");
      nota4 = reader.nextDouble(); // obter o valor do teclado

      // cálculo da média (PROCESSAMENTO)
      media = (nota1 + nota2 + nota3 + nota4) / 4;

      // exibição da média (SAÍDA)
      System.out.println("\nMedia = " + media);

    }
}