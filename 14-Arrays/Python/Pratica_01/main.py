""" Faça um programa para calcular a média aritmética
 * de uma série de n temperaturas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de temperaturas
 * a serem digitadas, bem como cada uma das n temperaturas.
 *  O programa deve armazenar as temperaturas em um array.
 *  Como saída, o programa deve exibir a média das n temperaturas digitadas
"""

# precisamos instalar e importar a bilbioteca numpy
import numpy

# solicitação dos valores (ENTRADA)
print("Digite a quantidade de temperaturas: ")
n = int(input())
temperaturas = numpy.empty(n) # cria um array de tamanho n
for i in range(n): # percorre as n posições do array
    print("Digite a temperatura " + str(i+1) + ": ")
    temperaturas[i] = float(input())

# cálculo da média (PROCESSAMENTO)
media = 0.0
for i in range(n): # percorre as n posições do array
    media = media + temperaturas[i]
media = media / n

# exibição da média (SAÍDA)
print("\nA media das temperaturas = " + str(media))