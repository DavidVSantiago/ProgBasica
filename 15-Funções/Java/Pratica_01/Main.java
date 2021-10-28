/** Escreva um programa que implemente uma função que receba
 * como parâmetro o raio de uma esfera, e retorne o volume dessa esfera.
 *  O programa deve receber como ENTRADA o raio da esfera
 * e exibir como SAÍDA o volume da esfera. 
 * Fórmula: volume=(4*π*raio³)/3
 **/

import java.util.Scanner;
class Main {
    public static double calculaVolume(double r){
        double v = (4*Math.PI*Math.pow(r, 3)) / 3;
        return v;
    }
    public static void main(String[] args) {
        // declaração das variáveis
        double raio;
        double volume;

        // solicitação dos valores (ENTRADA)
        Scanner reader = new Scanner(System.in);
        System.out.print("Digite o raio da esfera (em metros): ");
        raio = reader.nextDouble();

        // cálculo do volume (PROCESSAMENTO)
        volume = calculaVolume(raio); // invocação da função

        // exibição do volume (SAÍDA)
        System.out.println("\nVolume da esfera = "+volume);
    }
}