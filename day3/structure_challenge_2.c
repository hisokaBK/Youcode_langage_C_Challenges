#include <stdio.h>

struct etudaint {
      char nom[20],prenom[20];
      float notes[50];
};

int main(){
       int n;
       struct etudaint etu1;

       printf("entrez le nom du etudiant : ");
       scanf("%s",&etu1.nom);
       printf("entrez le prenom d'etudiant : ");
       scanf("%s",&etu1.prenom);
       printf("entrez nombre du not stocker : ");
       scanf("%d",&n);

       for (int i=0;i<n;i++){
           printf("entrez la note %d : ",i+1);
           scanf("%f",&etu1.notes[i]);
       }

       printf("le nom d'etudiant est : %s\n",etu1.nom);
       printf("le prenom d'etudiant est : %s\n",etu1.prenom);

       printf("les notes de ce etudiant est : \n");

       for (int i=0;i<n;i++){
           printf("note_%d : %.2f\n",i+1,etu1.notes[i]);
       }
       


    return 0;
}