#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char c1[10],c2[10];
    printf("entrez la premier chaine : ");
    fgets(c1,sizeof(c1),stdin);
    printf("entrez la deuxieme chaine : ");
    fgets(c2,sizeof(c2),stdin);

        for (int i=0;i!=-1;i++){
          if(c1[i]=='\n'){
              c1[i]='\0';
              break;
          }
        }

        for (int i=0;i!=-1;i++){
          if(c2[i]=='\n'){
              c2[i]='\0';
              break;
          }
        }

        int cmp1=0;
        for (int i=0;c1[i]!='\0';i++){
              cmp1++;
        }

        int cmp2=0;
        for (int i=0;c2[i]!='\0';i++){
              cmp2++;
        }

        for (int i=0;i<cmp2;i++){
              c1[cmp1+i]=c2[i];
        }

        printf("----> %s",c1);

  return 0;
}