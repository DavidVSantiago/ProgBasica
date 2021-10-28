""" Faça um programa que leia do usuário o valor da quantidade de
 * calorias consumidas por dia.
 *  O programa deve verificar se a quantidade de calorias se encontra
 * na faixa de segurança - entre 1200 e 1900 cal.(incluíndo ambos) por dia
 *  O programa deve exibir como saída uma das duas informações:
 *  - Ou exibe "Dentro da faixa", para qtd. de calorias entre 1200 e 1900.
 *  - Ou, caso contrário, exibe "Fora da faixa". 
"""

# solicitação dos valores (ENTRADA)
print("Digite a qtd. de calorias consumidas por dia: ")
calorias = int(input())

# verificação da faixa (PROCESSAMENTO E SAÍDA)
if(calorias >= 1200 and calorias <= 1900): # verifica a faixa de segurança
    print("\nDentro da faixa")
else: # caso contrário
    print("\nFora da faixa")