#include "carte.h"

//Impl�mentation de la m�thode
//======================================
//BUT : Cr�er une nouvelle carte d'identit� que l'on va stocker dans un fichier texte
//ENTREE : Les diff�rents champs de la carte
//SORTIE : La Carte
//======================================
extern void CreerCarte(tCarte *LaCarte)
{

    fflush(stdin);
    printf("Entrer votre nom : ");
    gets(&LaCarte->cNom);
    fflush(stdin);

    printf("Entrer votre prenom : ");
    gets(&LaCarte->cPrenom);
    fflush(stdin);

    printf("Entrer votre adresse : ");
    gets(&LaCarte->cAdresse);
    fflush(stdin);

    printf("Entrer votre CodePoste : ");
    gets(&LaCarte->cCp);
    fflush(stdin);

    printf("Entrer votre ville : ");
    gets(&LaCarte->cVille);
    fflush(stdin);

}

