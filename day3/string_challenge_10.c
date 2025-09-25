#include <stdio.h>
#include <string.h>

int main(){
    
    char chaine[100],sous_chaine[50] ;

    printf("entrez une chaine : ");
    fgets(chaine,sizeof(chaine),stdin);
    chaine[strcspn(chaine,"\n")]='\0';

    printf("entrez une sous chaine : ");
    fgets(sous_chaine,sizeof(sous_chaine),stdin);
    sous_chaine[strcspn(sous_chaine,"\n")]='\0';

    int n1=strlen(chaine),n2=strlen(sous_chaine);
    int cmp=0;
    int j=-1;
    for(int i=0;i<n1;i++){
           j++;

          if(chaine[i]==sous_chaine[j]){ 
               cmp++;
          }else{
               cmp=0;
               j=-1;
          }

          if(cmp==n2){
                   break;
               }
    }
     
    if(cmp==n2){
           printf("la sous-chaine est trouvee ");
    }else{
           printf("la sous-chaine est non trouvee ");
    }
    
    return 0;
}