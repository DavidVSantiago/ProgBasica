""" Faça um programa que leia o valor de um produto e imprima
 * o valor com desconto, tendo em vista que o desconto foi de 12%.
"""

# obtenção dos valores (ENTRADA)
print("Digite o valor do produto: R$")
valor = float(input())

# cálculo do desconto (PROCESSAMENTO)
valor -= (valor*0.12)
#valor = valor - (valor*0.12)

# exibição do valor descontado (SAÍDA)
print("\nValor descontado: R$" + str(valor))