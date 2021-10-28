""" Escreva um programa que implemente uma função que receba
 * como parâmetro o raio de uma esfera, e retorne o volume dessa esfera.
 *  O programa deve receber como ENTRADA o raio da esfera
 * e exibir como SAÍDA o volume da esfera. 
 * Fórmula: volume=(4*π*raio³)/3
"""
import math

# implementação da função
def calculaVolume(r):
    v = (4*math.pi*pow(r,3)) / 3
    return v

# solicitação dos valores (ENTRADA)
print("Digite o raio da esfera (em metros): ")
raio = float(input())

# cálculo do volume (PROCESSAMENTO)
volume = calculaVolume(raio) # invocação da função

# exibição do volume (SAÍDA)
print("\nVolume da esfera: "+ str(volume) )