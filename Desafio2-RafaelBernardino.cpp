#include <iostream>
using namespace std;
int operation;

float firstValue, secondValue;

void getInputs(string firstValueName = "primeiro numero", string secondValueName = "segundo numero")
{
    cout << "Digite o " << firstValueName << endl;
    cin >> firstValue;
    cout << "Digite o " << secondValueName << endl;
    cin >> secondValue;
}

int main()
{
    cout << "Ola, bem vindo a calculadora arcaica" << endl;
    cout << "Digite qual das operacoes deseja fazer?" << endl;
    cout << "[1] Soma \n[2] Subtracao \n[3] Multiplicacao \n[4] Divisao \n[5] Resto Divisao \n[6] Raiz Quadrada \n[7] Fatorial" << endl;
    cin >> operation;

    if (operation < 4 && operation > 0)
    {
        getInputs();
    }

    switch (operation)
    {
    case 1:
        cout << "Resultado da soma: " << firstValue << " + " << secondValue << " = " << firstValue + secondValue << endl;
        break;
    case 2:
        cout << "Resultado da subtracao:" << firstValue << " - " << secondValue << " = " << firstValue - secondValue << endl;
        break;
    case 3:
        cout << "Resultado da multiplicacao: " << firstValue << " * " << secondValue << " = " << firstValue * secondValue << endl;
        break;
    case 4:
        getInputs("numerador", "denominador");
        if (secondValue == 0)
        {
            cout << "Nao e possivel dividir por zero" << endl;
        }
        else
        {
            cout << "Resultado da divisao: " << firstValue << " / " << secondValue << " = " << firstValue / secondValue << endl;
        }
        break;
    default:
        cout << "Operacao invalida" << endl;
        break;
    }

    return 0;
}