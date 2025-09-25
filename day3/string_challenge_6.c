#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char s[100];
    printf("entrez une chaine : ");
    fgets(s,sizeof(s),stdin);

    s[strcspn(s,"\n")]='\0';

    char c ;
    int cmp=0;
    printf("entrez la caracter pour la recherch : ");
    scanf(" %c",&c);

    for (int i=0;i<strlen(s);i++){
            if(s[i]==c){
                 cmp++;
            }
    }

    printf("le nombre d'occurrences du %c a la chaine %s est : %d",c,s,cmp);

    return 0;
}