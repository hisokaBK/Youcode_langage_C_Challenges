#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len_char 100



struct Contact {
       int id;
       char nom[len_char]; 
       char email[len_char];
       char num_tel[len_char];
};

void fun_choix (char *choix){
        printf("\n________________________________________________________\n menu  :  \n---------------------- \n\n{Chaque nombre represente une fonction } \n\n1 ----> Ajouter un Contact.\n2 ----> Modifier un Contact .\n3 ----> Supprimer un Contact.\n4 ----> Afficher Tous les Contacts .\n5 ----> Rechercher un Contact  \n6> --->Sortie \n\n==>");
        scanf(" %c",&*choix);
}



int main (){
      struct Contact contacts[100];
      int size=-1;

    

    //2. Modifier un Contact
        char mod_nom[len_char];
        int index_user=0 ;
        int new_name_yn=0;
        int new_number_yn=0;
        int new_email_yn=0;

     printf("\nbonjour Voici le : \n");
      

     char choix;
     fun_choix(&choix);

     while(choix!='6'){
         switch(choix){
            case '1':
                 size++;
                 contacts[size].id=size;
                 getchar();
                 printf("entrez le nom : ");
                 fgets(contacts[size].nom,len_char,stdin);
                 contacts[size].nom[strcspn(contacts[size].nom,"\n")]='\0';

                 printf("entrez l'email : ");
                 fgets(contacts[size].email,len_char,stdin);
                 contacts[size].email[strcspn(contacts[size].email,"\n")]='\0';

                  printf("entrez le Numero de telephone  : ");
                 fgets(contacts[size].num_tel,len_char,stdin);
                 contacts[size].num_tel[strcspn(contacts[size].num_tel,"\n")]='\0';

                 fun_choix(&choix);
                 break;

            case '2':

                    struct Contact *contacts_par_nom;
                    contacts_par_nom =malloc(50 * sizeof(struct Contact));
                    int size2=-1;

                    printf("entrez le nom pour la modifie : ");
                    scanf(" %s",mod_nom);
                     
                    for (int i=0;i<=size;i++){
                         if(strstr(contacts[i].nom,mod_nom) != NULL){
                               size2++;
                              contacts_par_nom[size2].id=contacts[i].id;
                              strcpy(contacts_par_nom[size2].nom,contacts[i].nom);
                              strcpy(contacts_par_nom[size2].email,contacts[i].email);
                              strcpy(contacts_par_nom[size2].num_tel,contacts[i].num_tel);

                         }
                      }
                if(size2!=-1){
                    printf("Choisissez la personne dont vous voulez modifier les informations (choisissez un numero de 1 a %d)",size2+1);
                    for (int i=0;i<=size2;i++){
                           printf("\n {{ %d }} : nom -> %s email -> %s \n",i+1,contacts_par_nom[i].nom,contacts_par_nom[i].email);
                    }

                    int this_one ;
                    scanf("%d",&this_one);

                    printf("Voulez-vous modifier le nom ? (1 pour oui, 0 pour non): ");
                    scanf("%d",&new_name_yn);
                    getchar();
                    if(new_name_yn==1){
                         printf("entrez nom : ");
                         fgets(contacts[contacts_par_nom[this_one-1].id].nom,len_char,stdin);
                         contacts[contacts_par_nom[this_one-1].id].nom[strcspn(contacts[contacts_par_nom[this_one-1].id].nom,"\n")]='\0';
                         new_name_yn=0;
                    }
                     
                    printf("Voulez-vous modifier l'email ? (1 pour oui, 0 pour non) : ");
                    scanf("%d",&new_email_yn);
                    if(new_email_yn==1){
                         printf("entrez email : ");
                         fgets(contacts[contacts_par_nom[this_one-1].id].email,len_char,stdin);
                         contacts[contacts_par_nom[this_one-1].id].email[strcspn(contacts[contacts_par_nom[this_one-1].id].email,"\n")]='\0';
                         scanf(" %s",contacts[contacts_par_nom[this_one-1].id].email);
                         new_email_yn=0;
                    }
                    printf("Voulez-vous modifier le numero de telephone ? (1 pour oui, 0 pour non): ");
                    scanf("%d",&new_number_yn);
                    if(new_number_yn==1){
                        getchar();
                        printf("entrez new Numero de telephone : ");
                        fgets(contacts[contacts_par_nom[this_one-1].id].num_tel,len_char,stdin);
                        contacts[contacts_par_nom[this_one-1].id].num_tel[strcspn(contacts[contacts_par_nom[this_one-1].id].num_tel,"\n")]='\0';
                        new_number_yn=0;
                    } 
                }else{
                          printf("\nIl n'y a pas de numero avec ce nom : %s ??\n",mod_nom);
                    }

                    free(contacts_par_nom);

                    fun_choix(&choix);
                    break;
            

            case '3':
                     
                     contacts_par_nom =malloc(50 * sizeof(struct Contact));
                     size2=-1;
 
                     printf("entrez le nom pour la Supprimer  : ");
                     scanf(" %s",mod_nom);
                      
                     for (int i=0;i<=size;i++){
                          if(strstr(contacts[i].nom,mod_nom) != NULL){
                                size2++;
                               contacts_par_nom[size2].id=contacts[i].id;
                               strcpy(contacts_par_nom[size2].nom,contacts[i].nom);
                               strcpy(contacts_par_nom[size2].email,contacts[i].email);
                               strcpy(contacts_par_nom[size2].num_tel,contacts[i].num_tel);
 
                          }
                       }
                     if(size2!=-1){
                     printf("Choisissez la personne que vous voulez supprimer (choisissez un numero de 1 a %d)",size2+1);
                     for (int i=0;i<=size2;i++){
                            printf("\n {{ %d }} : nom -> %s email -> %s \n",i+1,contacts_par_nom[i].nom,contacts_par_nom[i].email);
                     }

                     int this_one ;
                     scanf("%d",&this_one);


                     for(int i=contacts_par_nom[this_one-1].id;i<size;i++){
                            strcpy(contacts[i].nom,contacts[i+1].nom) ;
                            strcpy(contacts[i].email,contacts[i+1].email);
                            strcpy(contacts[i].num_tel,contacts[i+1].num_tel);
                            contacts[i].id=contacts[i+1].id;
                            contacts[i].id--;

                     }
                    }else{
                         printf("\nIl n'y a pas de numero avec ce nom : %s ??\n",mod_nom);
                     }


                     size--;
                     free(contacts_par_nom);
                     fun_choix(&choix);
                     break;
            case '4':
                  if(size!=-1){
                     printf("voici touts les Contacts : \n");
                   for(int i=0;i<=size;i++){
                         printf("Contact %d : {nom -> %s , email -> %s , Numero de telephone -> %s} \n",i+1,contacts[i].nom,contacts[i].email,contacts[i].num_tel);
                      }
                    }else{
                      printf("il ne trouve aucun Contact !!!!! \n");
                   }
                   fun_choix(&choix);

                   break;

            case '5':
                     
                     contacts_par_nom =malloc(50 * sizeof(struct Contact));
                     size2=-1;
 
                     printf("entrez le nom pour la Supprimer  : ");
                     scanf(" %s",mod_nom);
                      
                     for (int i=0;i<=size;i++){
                          if(strstr(contacts[i].nom,mod_nom) != NULL){
                                size2++;
                               contacts_par_nom[size2].id=contacts[i].id;
                               strcpy(contacts_par_nom[size2].nom,contacts[i].nom);
                               strcpy(contacts_par_nom[size2].email,contacts[i].email);
                               strcpy(contacts_par_nom[size2].num_tel,contacts[i].num_tel);
 
                          }
                       }

                     if(size2!=-1){
                     printf("Les nombres presents sous ce nom : \n");
                     for (int i=0;i<=size2;i++){
                            printf("\n {{ %d }} : nom -> %s email -> %s \n",i+1,contacts_par_nom[i].nom,contacts_par_nom[i].email);
                     }
                     }else{
                         printf("\nIl n'y a pas de numero avec ce nom : %s ??\n",mod_nom);
                     }

                     free(contacts_par_nom);
                
                fun_choix(&choix);

                break;

            case '6':
                 printf("\n \n--- EXIT --- \n\n");
                 break;

            default :
                printf(" \n=======================================\n Le choix n'existe pas dans la liste\n============================================== \n");
                fun_choix(&choix);
         }
     }
      return 0;
            
 }