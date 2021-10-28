""" Desenvolva um algoritmo que receba como entrada:
	1 - um valor de um produto
	2 - um valor de desconto desse produto (em %)
    e exiba como saída: a valor final descontado
"""
# obtenção das entradas (ENTRADA)
print("Digite o valor do produto: ")
valorProduto = float(input())
print("Digite o valor do desconto: ")
valorDesconto = float(input())

# cálculo do desconto (PROCESSAMENTO)
valorFinal = valorProduto - (valorProduto * (valorDesconto/100))

# exibição do valor descontado (SAÍDA)
print("\nValor final descontado = " + str(valorFinal))