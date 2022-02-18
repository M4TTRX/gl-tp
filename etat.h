#pragma once
#include "symbole.h"

enum IdEtat
{
    E0,
    E1,
    E2,
    E3,
    E4,
    E5,
    E6,
    E7,
    E8,
    E9
};

class Etat
{

public:
    IdEtat idEtat;
    Etat() {}
    ~Etat();
    Etat *prochain(Symbole *symbole);
};

class Etat_0 : public Etat
{
public:
    Etat_0()
    {
        idEtat = E0;
    }
    Etat *prochain(Symbole *symbole);
};
class Etat_1 : public Etat
{
public:
    Etat_1()
    {
        idEtat = E1;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_2 : public Etat
{
public:
    Etat_2()
    {
        idEtat = E2;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_3 : public Etat
{
public:
    Etat_3()
    {
        idEtat = E3;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_4 : public Etat
{
public:
    Etat_4()
    {
        idEtat = E4;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_5 : public Etat
{
public:
    Etat_5()
    {
        idEtat = E5;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_6 : public Etat
{
public:
    Etat_6()
    {
        idEtat = E6;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_7 : public Etat
{
public:
    Etat_7()
    {
        idEtat = E7;
    }
    Etat *prochain(Symbole *symbole);
};

class Etat_8 : public Etat
{
public:
    Etat_8()
    {
        idEtat = E8;
    }
    Etat *prochain(Symbole *symbole);
};
class Etat_9 : public Etat
{
public:
    Etat_9()
    {
        idEtat = E9;
    }
    Etat *prochain(Symbole *symbole);
};
