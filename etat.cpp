#pragma once
#include "etat.h"
#include "symbole.h"

Etat *Etat_0::prochain(Symbole *symbole)
{
    Etat *nouvelEtat;
    switch (*symbole)
    {
    case OPENPAR:
        nouvelEtat = new Etat_2();
        break;
    case INT:
        nouvelEtat = new Etat_3();
        break;
    case E:
        nouvelEtat = new Etat_3();
        break;
    default:
        break;
    }
    return nouvelEtat;
}

Etat *Etat_1::prochain(Symbole *symbole)
{
    Etat *nouvelEtat;
    switch (*symbole)
    {
    case PLUS:
        nouvelEtat = new Etat_4();
        break;
    case MULT:
        nouvelEtat = new Etat_5();
        break;
    case FIN:
        // ON accepte l'etat
        break;

    default:
        nouvelEtat = new Etat_1();
        break;
    }
    return nouvelEtat;
}

Etat *Etat_2::prochain(Symbole *symbole)
{
    Etat *nouvelEtat;
    switch (*symbole)
    {
    case INT:
        nouvelEtat = new Etat_3();
        break;
    case OPENPAR:
        nouvelEtat = new Etat_2();
        break;
    case E:
        nouvelEtat = new Etat_6();
        break;

    default:
        break;
        nouvelEtat = new Etat_2();
    }
    return nouvelEtat;
}

Etat *Etat_3::prochain(Symbole *symbole)
{
    return new Etat_3();
}

Etat *Etat_4::prochain(Symbole *symbole)
{
    Etat *nouvelEtat;
    switch (*symbole)
    {
    case INT:
        nouvelEtat = new Etat_3();
        break;
    case OPENPAR:
        nouvelEtat = new Etat_2();
        break;
    case E:
        nouvelEtat = new Etat_7();
        break;

    default:
        break;
        nouvelEtat = new Etat_4();
    }
    return nouvelEtat;
}
Etat *Etat_5::prochain(Symbole *symbole)
{
    Etat *nouvelEtat;
    switch (*symbole)
    {
    case INT:
        nouvelEtat = new Etat_3();
        break;
    case OPENPAR:
        nouvelEtat = new Etat_2();
        break;
    case E:
        nouvelEtat = new Etat_8();
        break;

    default:
        break;
        nouvelEtat = new Etat_5();
    }
    return nouvelEtat;
}

Etat *Etat_6::prochain(Symbole *symbole)
{
    Etat *nouvelEtat;
    switch (*symbole)
    {
    case PLUS:
        nouvelEtat = new Etat_4();
        break;
    case MULT:
        nouvelEtat = new Etat_5();
        break;
    case CLOSEPAR:
        nouvelEtat = new Etat_9();
        break;

    default:
        break;
        nouvelEtat = new Etat_6();
    }
    return nouvelEtat;
}

Etat *Etat_7::prochain(Symbole *symbole)
{
    return new Etat_7();
}

Etat *Etat_8::prochain(Symbole *symbole)
{
    return new Etat_8();
}

Etat *Etat_9::prochain(Symbole *symbole)
{
    return new Etat_9();
}