#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED
#pragma once
#include <stdio.h>
#include <stdlib.h>

//d�claration des constantes
#define MAXCAR 25
#define MAXADRESSE 100
#define MAXCP 5

//d�claration du type structur� Carte (d'identit�)
typedef struct tCarte{

    char cNom[MAXCAR];
    char cPrenom[MAXCAR];
    char cAdresse[MAXADRESSE];
    char cCp[MAXCP];
    char cVille[MAXCAR];

}tCarte;

//Prototypes des fonctions
//===============================================
extern void CreerCarte(tCarte *LaCarte);
//===============================================

#endif // CARTE_H_INCLUDED
