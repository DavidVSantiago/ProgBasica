""" Desenvolva uma calculadora simples de 1 operador e 2 operandos.
 *  O usuário deve digitar o tipo de operação e os dois valores
 * que serão utilizados na operação.
 *  O programa deve apresentar para o usuário as 4 operações básicas:
 *  + soma
 *  - subtração
 *  * multiplicação
 *  / divisão
 * 
 *  O programa deve exibir como saída o resultado da operação
"""

# obtenção dos valores (ENTRADA)
print("Oporadores:")
print("+ - * /")
print("Digite o caracter da operacao:")
sinal = input()
while(sinal!='+' and sinal!='-' and sinal!='*' and sinal!='/'): # validação do operador
    print("\nOperador invalido! Digite novamente!")
    print("+ - * /")
    sinal = input()
print("Digite o operando 1:")
oper1 = float(input())
print("Digite o operando 2:")
oper2 = float(input())
while(sinal=='/' and oper2==0): # tentativa de divisão por zero
    print("Tentativa de divisao por zero!")
    print("Digite o operando 2:")
    oper2 = float(input())

# cálculo da operação (PROCESSAMENTO)
resultado = 0.0 # variável que armazena o resultado calculado
if(sinal=='+'):
    resultado = oper1 + oper2
elif(sinal=='-'):
    resultado = oper1 - oper2
elif(sinal=='*'):
    resultado = oper1 * oper2
elif(sinal=='/'):
    resultado = oper1 / oper2

# exibição do resultado (SAÍDA)
print("\n"+str(oper1)+str(sinal)+str(oper2)+" = "+str(resultado))