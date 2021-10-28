"""Desenvolva um algoritmo que solicite do usuário algumas informações
   e as exiba na tela, como um relatório
   As informações são:
   - nome
   - idade
   - sexo
   - profissão
   - salario
"""

# solicitação dos valores (ENTRADA)
print("Digite os seus dados")

# solicitação do nome
print("Nome:")
nome = input()

# solicitação do idade
print("Idade:")
idade = int(input()) # interpretar a entrada para inteiro

# solicitação do sexo
print("Sexo:")
sexo = input()

# solicitação do profissão
print("Profissao:")
profissao = input()

# solicitação do salário
print("Salario:")
salario = float(input())

# exibição das informações
print("\nOla, " + nome + ". Segue abaixo os seus dados.")
print("Idade: " + str(idade) + " anos.")
print("Sexo: " + sexo)
print("Profissao: " + profissao)
print("Salario: " + str(salario))