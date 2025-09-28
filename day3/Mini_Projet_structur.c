#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Contact {
       int id;
       char nom[20]; 
       char num_tel[20];
       char email[40];
};

void fun_choix (char *choix){
        printf("\n________________________________________________________\n\nbonjour Voici le menu  : \n1 ----> Ajouter un Contact.\n2 ----> Modifier un Contact .\n3 ----> Supprimer un Contact.\n4 ----> Afficher Tous les Contacts .\n5 ----> Rechercher un Contact  \n6> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
        scanf(" %c",&*choix);
}

int main (){
    struct Contact contacts[100];
    int size=-1;

    char choix;
    fun_choix(&choix);

    //2. Modifier un Contact
        char mod_nom[40];
        int index_user=0 ;
        int new_name_yn=0;
        int new_number_yn=0;
        int new_email_yn=0;
    //5.Rechercher un Contact
    struct Contact contacts_par_nom[100];
    int size2=-1;
      

     
     while(choix!='7'){
         switch(choix){
            case '1':
                 size++;
                 id=size;
                 printf("entrez le nom : ");
                 scanf("%s",contacts[size].nom);
                 printf("entrez le Numero de telephone  : ");
                 scanf("%s",contacts[size].num_tel);
                 printf("entrez l'email : ");
                 scanf("%s",contacts[size].email);
                 fun_choix(&choix);
                 break;

            case '2':
                    printf("entrez le nom pour la modifie : ");
                    scanf(" %s",mod_nom);
                     
                    for (int i=0;i<=size;i++){
                         if(strcmp(mod_nom,contacts[i].email)){
                               index_user=i;
                         }
                      }

                    printf("you want change email : 1 for yes 0 for no : ");
                    scanf("%d",&new_email_yn);
                    if(new_name_yn==1){
                         printf("entrez email : ");
                         scanf("%s",contacts[index_user].email);
                         new_email_yn=0;
                    }

                    printf("you want change name : 1 for yes 0 for no : ");
                    scanf("%d",&new_name_yn);
                    if(new_name_yn==1){
                         printf("entrez nom : ");
                         scanf("%s",contacts[index_user].nom);
                         new_name_yn=0;
                    }

                    printf("you want change nomber : 1 for yes 0 for no");
                    scanf("%d",&new_number_yn);
                    if(new_name_yn==1){
                        printf("entrez new Numero de telephone : ");
                        scanf("%s",contacts[index_user].num_tel);
                        new_number_yn=0;
                    }

                    fun_choix(&choix);
                    break;
            

            case '3':
                     printf("entrez le email pour Supprimer  : ");
                     scanf(" %s",mod_nom);
                     
                    for (int i=0;i<=size;i++){
                         if(strcmp(mod_nom,contacts[i].email)){
                               index_user=i;
                         }
                      }

                    for (int i=index_user;i<=size;i++){
                           strcpy(contacts[i].nom,contacts[i+1].nom) ;
                           strcpy(contacts[i].email,contacts[i+1].email);
                           strcpy(contacts[i].num_tel,contacts[i+1].num_tel);
                    }
                    size--;
                    fun_choix(&choix);
                    break;
            case '4':
                  if(size!=-1){
                     printf("voici touts les Contacts : \n");
                   for(int i=0;i<=size;i++){
                         printf("Contact %d : {nom -> %s,Numero de telephone -> %s,email -> %d,\n",i+1,contacts[i].nom,contacts[i].num_tel,contacts[i].email);
                      }
                    }else{
                      printf("il ne trouve aucun Contact !!!!! \n");
                   }
                fun_choix(&choix);

                break;

            case '5':
                index_user=-1;
                printf("entrez le nom pour rocherch  : ");
                scanf(" %s",mod_nom);
                     
                for (int i=0;i<=size;i++){
                    if(strcmp(mod_nom,contacts[i].nom)==0){
                          size2++;
                          strcpy(contacts_par_nom[size2].nom,contacts[i].nom);
                          strcpy(contacts_par_nom[size2].email,contacts[i].email);
                          strcpy(contacts_par_nom[size2].num_tel,contacts[i].num_tel);
                     }
                }

                if(size2!=-1){
                    for(int i=0;i<=size2;i++){
                        printf("----> le nom : %s",contacts[i].nom);
                        printf("----> le email : %s",contacts[i].email);
                        printf("----> le Numero de telephone : %s",contacts[i].num_tel);
                    }
                      
                }else{
                      printf("no one in !!!");
                }

                fun_choix(&choix);

                break;
                    
         }
     }
      return 0;
            
 }