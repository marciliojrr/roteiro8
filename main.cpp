#include "Conta.h"
#include "ContaEspecial.h"

int main () {
    string n, c;
    double sal, s;
    int opcao = 0;
    while (opcao != 2) {
        cout << "Digite a opcao desejada para calcular sua area:" << endl
        << "- Conta-Corrente [1]" << endl
        << "- Conta Especial [2]" << endl
        << "- SAIR           [3]" << endl
        << endl <<
        ">> ";
        cin >> opcao;
        switch(opcao) {
        case 1:
            cout << "Digite o nome do cliente" << endl << ">> ";
            cin >> n;
            cout << "Digite o salario do cliente" << endl << ">> ";
            cin >> sal;
            cout << "Digite a conta do cliente" << endl << ">> ";
            cin >> c;
            cout << "Digite o saldo atual do cliente" << endl << ">> ";
            cin >> s;
            break;
        case 2:
            cout << "Digite o nome do cliente" << endl << ">> ";
            cin >> n;
            cout << "Digite o salario do cliente" << endl << ">> ";
            cin >> sal;
            cout << "Digite a conta do cliente" << endl << ">> ";
            cin >> c;
            cout << "Digite o saldo atual do cliente" << endl << ">> ";
            cin >> s;
            break;
        case 3:
            cout << "ADEUS" << endl << endl;
            break;
        }
    if (opcao == 1) {
        Conta cliente (n, sal, c, s);
        cout << "Cliente: " << cliente.getNome() <<
        endl << "Salario Mensal: " << cliente.getSalario() <<
        endl << "Conta-Corrente: " << cliente.getConta() <<
        endl << "Saldo atual: " << cliente.getSaldo() <<
        endl << "Limite Cheque-Especial: " << cliente.getLimite() << endl << endl << endl;
    }
    if (opcao == 2) {
        ContaEspecial cliente (n, sal, c, s);
        cout << "Cliente: " << cliente.getNome() <<
        endl << "Salario Mensal: " << cliente.getSalario() <<
        endl << "Conta-Corrente: " << cliente.getConta() <<
        endl << "Saldo atual: " << cliente.getSaldo() <<
        endl << "Limite Cheque-Especial: " << cliente.getLimite() << endl << endl << endl;
    }
    if (opcao == 3) {
        return 0;
    }
    }
}
