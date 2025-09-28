#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livres {
    char titre[40];
    char auteur[40];
    int annee;
};

void afficher_livre (struct livres x){
         printf("Titre : %s \n",x.titre);
         printf("Auteur : %s \n",x.auteur);
         printf("Annee : %d \n",x.annee);
}

int main (){
   
    struct livres livre1;
    printf("entrez le titre du livre :");
    fgets(livre1.titre,sizeof(livre1.titre),stdin);
    livre1.titre[strcspn(livre1.titre,"\n")]='\0';

    printf("entrez l'auteur du livre : ");
    fgets(livre1.auteur,sizeof(livre1.auteur),stdin);
    livre1.auteur[strcspn(livre1.auteur,"\n")]='\0';

    printf("entrez l'annee : ");
    scanf("%d",&livre1.annee);

    afficher_livre(livre1);

    return 0;
}