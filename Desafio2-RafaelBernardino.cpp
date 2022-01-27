#include <iostream>
using namespace std;
char operacao;

int main()
{
    cout << "Ola, bem vindo a calculadora arcaica" << endl;
    cout << "Digite qual das operacoes deseja fazer?" << endl;
    cout << "[1] Soma \n[2] Subtracao \n[3] Multiplicacao \n[4] Divisao \n[5] Resto Divisao \n[6] Raiz Quadrada \n[7] Fatorial" << endl;
    cin >> operacao;

    return 0;
}