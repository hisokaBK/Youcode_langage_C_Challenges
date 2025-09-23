#include <stdio.h>
#include <stdlib.h>

int main(){
       int n , somme=0;

       printf("entrez un nombre entier : ");
       scanf("%d",&n);

       for (int i=1;i<=n;i++){
            somme +=i;
       }

       printf("la somme est : %d",somme);

}