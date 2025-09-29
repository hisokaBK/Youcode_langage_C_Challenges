#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    float longueur;
    float largeur;
};


int main() {
    struct rectangle rec1[3];

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &rec1[1].largeur);

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &rec1[1].longueur);

    struct rectangle *p=malloc(sizeof(rec1)*2);
    
    *p=rec1[1];

    printf("L'aire du rectangle : %.2f\n",*(p->longueur) );

    return 0;
}
