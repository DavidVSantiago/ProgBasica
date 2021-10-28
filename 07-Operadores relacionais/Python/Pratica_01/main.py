""" Faça um programa que solicite a idade do usuário e informe:
*  - se ele é maior ou menor de idade.
*  - se o número que representa a sua idade é um valor par ou ímpar.
"""

# solicitação da idade (ENTRADA)
print("Digite a sua idade: ")
idade = int(input())

# verificação da idade (PROCESSAMENTO E SAÍDA)
if(idade >= 18): # se o usuário é maior de idade
    print("Maior de idade!")
else: # caso contrário
    print("Menor de idade!")

if((idade%2)==0): # se a idade é um valor par
    print("Idade PAR!")
else: # caso contrário
    print("Idade IMPAR!")