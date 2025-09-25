#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     char cs[10];
     printf("entrez un chaine : ");
     scanf("%s",cs);

     int cmp=0;
     for (int i=0;cs[i]!='\0';i++){
           cmp++;
     }

     printf("la longueur de %s est : %d",cs,cmp);

    return 0;
}