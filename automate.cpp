#pragma once
#include "automate.h"
#include "symbole.h"
#include "etat.h"
#include <vector>
using namespace std;

int Automate::exploration()
{
    // emilienmarion
    // Regarder l'etat dans lequel on est

    // Si l'etat necessite une modification de regles:
    //     -> Enlever n symboles de la liste des symboles
    //     -> Ajouter le symbole qui le remplace E
    // Sinon Il faut passer au prochain etat
    //     -> LIre le symbole dans lequel on est et le rajouter a notre pile
    //     -> On passe a l etat correspondant a la pile
    //     -> On rajoute le prochain symbole a la pile
    return 0;
}