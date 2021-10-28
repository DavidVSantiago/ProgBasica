""" Escreva um programa que solicite um número inteiro positivo,
 * maior que zero (0).
 *  Caso o número não seja positivo, repita o procedimento de solicitação.
 *  Caso seja positivo, exiba o número na tela.
"""
# solicitação dos valores (ENTRADA E PROCESSAMENTO)
print("Digite um numero inteiro positivo: ")
numero = int(input())

while(numero < 0): # repete enquanto o numero for negativo
	print("\nO numero digitado e negativo!")
	print("Digite um numero inteiro positivo: ")
	numero = int(input())

# exibição do resultado (SAÍDA)
print("\nNumero digitado: "+str(numero))