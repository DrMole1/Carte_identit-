#include <stdio.h>
#include <stdlib.h>
#include "sauvegarde.h"
#include "carte.h"

int main()
{
    //d�claration des variables
    int nChoix = 0;
    tCarte LaCarte;
    FILE * pFile=NULL;
    char cTexteTemp[MAXTEXTE];
    char buff[MAXTEXTE]={""};
    int nId = 0;

    //traitement principal
    do{

        //s�lecteur de m�thode
        printf("\n1 : Nouvelle carte\n");
        printf("2 : Lire cartes\n");
        printf("0 : Quitter\n");
        scanf("%d", &nChoix);

        //On set le nombre d'id d�j� pr�sent
        /*nId=SetId(pFile);*/

        //appel de m�thode
        if (nChoix==1)
        {
            CreerCarte(&LaCarte);
            nId++;
            EcrireCarte(pFile, &LaCarte, nId);
        }
        else if (nChoix==2)
        {
            LireCarte(pFile, cTexteTemp, buff);
            printf(buff);
        }

    }while (nChoix!=0);


    return 0;
}

//ID, Nom, Prenom, Adresse, code postal, ville en ajout d'un fichier
//static int
