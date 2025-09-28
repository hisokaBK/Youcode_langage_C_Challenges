#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    float longueur;
    float largeur;
};

float rectangle_aire(float longueur, float largeur) {
    return longueur * largeur;
}

int main() {
    struct rectangle rec1;

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &rec1.largeur);

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &rec1.longueur);

    printf("L'aire du rectangle : %.2f\n", rectangle_aire(rec1.longueur, rec1.largeur));

    return 0;
}
