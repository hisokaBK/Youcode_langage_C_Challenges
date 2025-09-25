#include <stdio.h>

struct personne{
      char nom[20],prenom[20];
      int age;
};

int main(){

    struct personne pr1;
    printf("entrez voutre nom : ");
    scanf("%s",pr1.nom);
    printf("entrez voutre prenom : ");
    scanf("%s",pr1.prenom);
    printf("entrez voutre age :");
    scanf("%d",&pr1.age);

    printf("nom --> %s\nprenom --> %s \nage -->%d",pr1.nom,pr1.prenom,pr1.age);


    return 0;
}