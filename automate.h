#pragma once
#include "symbole.h"
#include "etat.h"
#include <vector>
using namespace std;

class Automate
{
private:
    /* data */
public:
    Automate(Symbole *s)
    {
        vector<Symbole> stackSymboles;
        vector<Etat> stackEtat;
    }
    ~Automate();
    int exploration();
};

Automate::~Automate()
{
}
