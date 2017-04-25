#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include "Iconta.h"
#include <string>

class Conta : public Iconta {

private:
    string nome, conta;
    double salario, saldo, limite;

public:
    Conta() {};
    Conta (string n, double sal, string c, double s);
    virtual void sacar ();
    virtual void depositar ();
    void setNome(string n);
    void setConta(string c);
    void setSalario(double sal);
    void setSaldo(double s);
    void setLimite(double l);
    void definirLimite();
    string getNome();
    string getConta();
    double getSalario();
    double getSaldo();
    double getLimite();
};
#endif // CONTA_H_INCLUDED
