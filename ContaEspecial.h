#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED
#include "Conta.h"

class ContaEspecial : public Conta {

public:
    //Conta (string n, double sal, string c, double s);
    ContaEspecial (string n, double sal, string c, double s);
    void definirLimite();
};

#endif // CONTAESPECIAL_H_INCLUDED
