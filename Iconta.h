#ifndef ICONTA_H_INCLUDED
#define ICONTA_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Iconta {
public:
    virtual void sacar () = 0;
    virtual void depositar () = 0;
};
#endif // ICONTA_H_INCLUDED
