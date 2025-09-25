#include <stdio.h>
#include <string.h>

int main(){
    
    char b[10],c[10];
    printf("entrez le premier chaine : ");
    scanf("%s",b);
    printf("entrez la deuxieme chaine : ");
    scanf("%s",c);

    int nb=strlen(b),nc=strlen(c);

    int check=0;

    if(nb==nc){
          for(int i=0;i<nb;i++){
               if(b[i]!=c[i]){
                    check++;
                    break;
               }
          }
    }

    if(check==0 && nb==nc){
          printf("les deux chaine est egales ");
    }else{
          printf("les deux chaine est differentes ");
    }

    return 0;
}