#include <stdio.h>
#include <string.h>

int main(){
    
    char chaine[100];
    printf("entrez une chaine : ");
    fgets(chaine,sizeof(chaine),stdin);
     
    chaine[strcspn(chaine,"\n")]='\0';
    char v_change ;

    for (int i=0;i<strlen(chaine);i++){
          if(chaine[i]==' '){
             while(chaine[i]==' '){
                for(int j=i;j<strlen(chaine);j++){
                        chaine[j]=chaine[j+1];
                }
                chaine[strlen(chaine)]='\0';
            }
          }
    }

    printf("-----> %s",chaine);


    return 0;
}