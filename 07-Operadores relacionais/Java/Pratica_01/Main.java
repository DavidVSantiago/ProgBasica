/** Faça um programa que solicite a idade do usuário e informe:
 *  - se ele é maior ou menor de idade.
 *  - se o número que representa a sua idade é um valor par ou ímpar.
 */
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        // declaração das variáveis
        int idade;

        // solicitação da idade (ENTRADA)
        Scanner reader = new Scanner(System.in);
        System.out.print("Digite a sua idade: ");
        idade = reader.nextInt();

        // verificação da idade (PROCESSAMENTO E SAÍDA)
        if(idade >= 18){ // se é maior de idade
            System.out.println("Maior de idade!");
        }else{ // caso contrário
            System.out.println("Menor de idade!");
        }

        if((idade%2) == 0 ){ // verifica se a idade é par
            System.out.println("Idade PAR!");
        }else{ // caso contrário
            System.out.println("Idade ÍMPAR!");
        }
       
    }
}