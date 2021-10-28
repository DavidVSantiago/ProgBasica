"""Desenvolva um algoritmo que receba como entrada 4 notas de um aluno
   e exiba como saída a média desse aluno.
"""
# obtenção das notas (ENTRADA)
print("Digite a nota 01: ")
nota1 = float(input())

print("Digite a nota 02: ")
nota2 = float(input())

print("Digite a nota 03: ")
nota3 = float(input())

print("Digite a nota 04: ")
nota4 = float(input())

# cálculo da média (PROCESSAMENTO)
media = (nota1 + nota2 + nota3 + nota4) / 4

# exibição da média (SAÍDA)
print("\nMedia = " + str(media))