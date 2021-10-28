/**Desenvolva um algoritmo que solicite do usuário algumas informações e as exiba na tela, como um relatório
 * As informações são:
 * - nome
 * - idade
 * - sexo
 * - profissão
 * - salario
 */
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        // criação das variáveis
        String nome;
        int idade;
        char sexo;
        String profissao;
        double salario;

        // solicitação dos valores (ENTRADA)
        Scanner reader = new Scanner(System.in);
        System.out.println("Digite os seus dados.");

        // solicitação do nome
        System.out.print("Nome: ");
        nome = reader.nextLine();

        // solicitação da idade
        System.out.print("Idade: ");
        reader = new Scanner(System.in); // reinicializando o objeto Scanner
        idade = reader.nextInt();

        // solicitação do sexo
        System.out.print("Sexo: ");
        reader = new Scanner(System.in); // reinicializando o objeto Scanner
        sexo = reader.next().charAt(0);

        // solicitação da profissão
        System.out.print("Profissão: ");
        reader = new Scanner(System.in); // reinicializando o objeto Scanner
        profissao = reader.nextLine();

        // solicitação do salario
        System.out.print("Salário: ");
        reader = new Scanner(System.in); // reinicializando o objeto Scanner
        salario = reader.nextDouble();

        // exibição na tela (SAÍDA)
        System.out.println("\nOla, "+nome+". Segue abaixo os seus dados.");
        System.out.println(idade + " anos");
        System.out.println("sexo: "+sexo);
        System.out.println("profissão: "+profissao);
        System.out.println("salário: R$ "+salario);

    }
}