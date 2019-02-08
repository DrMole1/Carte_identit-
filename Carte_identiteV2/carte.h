#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//d�claration des constantes
#define MAXCAR 100

//d�claration du type structur� Carte (d'identit�)
typedef struct tCarte{

    int nId;
    char* cNom[MAXCAR];
    char* cPrenom[MAXCAR];
    char* cAdresse[MAXCAR];
    char* cCp[MAXCAR];
    char* cVille[MAXCAR];

}tCarte;

//Prototypes des fonctions
//===============================================
extern void CreerCarte(tCarte *LaCarte);
//===============================================

#endif // CARTE_H_INCLUDED
