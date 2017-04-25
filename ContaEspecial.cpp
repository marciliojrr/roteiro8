#include "ContaEspecial.h"

ContaEspecial::ContaEspecial (string n, double sal, string c, double s){
    setNome(n);
    setSalario(sal);
    setConta(c);
    setSaldo(s);
    definirLimite();
    cout << "***CONTA ESPECIAL***" << endl << endl;
}
void ContaEspecial::definirLimite() {
    setLimite(getSalario()*3);
    }
