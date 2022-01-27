def main():
    '''Retorna  a quantidade de incongruências em uma
    determinada compra de componentes eletrônicos'''
    prateleira = ['arduino', 'servoMotor', 'potenciometro', 'LEDverm', 'LEDverd', 'resistor1', 'resistor100k']
    precoPrat = [74, 5, 1.9 , 1, 1, 0.1, 0.5]

    comprados = ['resistor100k','resistor100k', 'servoMotor', 'arduino', 'arduino', 'potenciometro', 'resistor1', 'LEDverm', 'LEDverm','LEDverm', 'LEDverd','LEDverd']
    precoPago = [0.7, 1, 5, 100, 74, 2.5, 0.1, 1, 1, 2, 2, 1]

    erros_encontrados = 0
    dict_tabela_precos = {}

    #Incrementar um dicionário onde a chave é o nome do componente e o valor o preço praticado/preço da prateleira
    for i_prateleira in range(len(prateleira)):
        dict_tabela_precos[prateleira[i_prateleira]] = precoPrat[i_prateleira]

    for i_comprado in range(len(comprados)):
        nome_item_comprado = comprados[i_comprado]
        if(dict_tabela_precos[nome_item_comprado] != precoPago[i_comprado]):
            erros_encontrados += 1

    return erros_encontrados

print(main())