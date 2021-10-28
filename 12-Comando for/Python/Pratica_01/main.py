""" Faça um programa para calcular a média aritmética
 * de uma série de n notas digitadas pelo usuário.
 *  O programa deve solicitar do usuário a quantidade n de notas
 * a serem digitadas, bem como cada uma das n notas.
 *  Como saída, o programa deve exibir a média das n notas digitadas
"""

# solicitação das notas (ENTRADA E PROCESSAMENTO)
print("Digite a quantidade de notas: ")
n = int(input())
media = 0.0 # variável com valor decimal

for i in range(n): # repete n vezes (de 0 até n-1)
	print("Digite a nota " +str(i+1) + ": ")
	nota = float(input())
	media = media + nota # acumula cada uma das notas

media = media/n # dividimos por n para calcular a média

# exibição da média (SAÍDA)
print("\nMedia: "+ str(media))