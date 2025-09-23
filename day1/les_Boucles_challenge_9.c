#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,cop,compt=0;
    printf("entrez un nombre entier : ");
    scanf("%d",&n);
     cop=n;
    while(cop!=0){
         compt++;
         cop/=10;
    }
    printf("Nombre de chiffres = %d",compt);

    return 0;
}