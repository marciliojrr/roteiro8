#include "Conta.h"

Conta::Conta (string n, double sal, string c, double s){
    setNome(n);
    setSalario(sal);
    setConta(c);
    setSaldo(s);
    definirLimite();
}
    void Conta::setNome(string n) {
        if (n == "") {
            cout << "Nome invalido, tente novamente: " ;
            cin >> n;
        } else {
            nome = n;
        }
    }
    void Conta::setConta(string c) {
        if (c == "") {
            cout << "Numero de conta invalido, tente novamente: ";
            cin >> c;
        } else {
            conta = c;
        }
    }
    void Conta::setSalario(double sal) {
        if (sal == 0.0) {
            cout << "Digite um salario positivo." << endl << ">> R$ ";
            cin >> sal;
        } else {
            salario = sal;
        }
    }
    void Conta::setSaldo(double s) {
        saldo = s;
    }
    void Conta::definirLimite() {
        limite = getSalario()*2;
    }
    void Conta::setLimite(double l) {
        limite = l;
    }
    string Conta::getNome() {
        return nome;
    }
    string Conta::getConta() {
        return conta;
    }
    double Conta::getSalario() {
        return salario;
    }
    double Conta::getSaldo() {
        return saldo;
    }
    double Conta::getLimite() {
        return limite;
    }
void Conta::sacar () {
    double saque;
    cout << "Digite o valor do saque" << endl
    << ">> ";
    cin >> saque;
    Conta::setSaldo(getSaldo() - saque);
}
void Conta::depositar () {
    double deposito;
    cout << "Digite o valor a ser depositado" << endl
    << ">> ";
    cin >> deposito;
    Conta::setSaldo(getSaldo()+ deposito);
    }
