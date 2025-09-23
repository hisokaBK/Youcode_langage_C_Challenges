#include <stdio.h>
#include <stdlib.h>

int main(){
       int n ;
       printf("entrez nomber valeur bour le tableu : ");
       scanf("%d",&n);

       int tab[n];

       for (int i=0;i<n;i++){
        printf("tab[%d] <-- ",i);
        scanf("%d",&tab[i]);
       }
        int val;
       printf("entrez la valeur bour le change : ");
       scanf("%d",&val);

       for (int i=0;i<n;i++){
           if(tab[i]==val){
                 printf("entrez nouvel valeu : ");
                 scanf("%d",&tab[i]);
           }
       }

       printf("\n===============================\n");

       for(int i=0;i<n;i++){
           printf("==>%d",tab[i]);
       }


    return 0;

}