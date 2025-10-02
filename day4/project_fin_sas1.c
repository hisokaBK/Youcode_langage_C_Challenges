#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define totale_taches 100
struct ToDos {
      int id ;
      char titre[100];
      char description[300];
      int deadline ;
      char statut[30];
      char date_creation[100] ;
      int date_fin ;
};

void fun_choix (char *choix){
        printf("\n\n menu  :  \n---------------------- \n\n{Chaque nombre represente une fonction } \n\n1 ----> Ajouter une ou plusieurs nouvelles taches .\n2 ----> Afficher la liste de toutes les tachest.\n3 ----> Modifier une tache \n4 ----> Supprimer une tache par identifiant \n5 ----> Rechercher les Taches \n6 ----> Statistiques \n7 ----> EXIT \n________________________________________________________\n\n==>");
        scanf(" %c",&*choix);
        printf("\n________________________________________________________\n\n");
}     

//hadada bach nb9a nzid l7ajm dyal array kol mara l9it smaiya kayna fchi tache 
int num_of_elem=0;

int *list(char titre[100],struct ToDos x ){
             int *list_id_pour_modf=malloc(1*sizeof(int));
             for (int i=0;i<=size;i++){
                       if(strstr(x[i].titre,titre_mdf) != NULL){
                             num_of_elem++;
                             //hna kanzid size dyal list id kol mara kal9a joz2 mn ism tach kayn
                             list_id_pour_modf=realloc(list_id_pour_modf,num_of_elem*sizeof(int));
                             list_id_pour_modf[num_of_elem-1]=x[i].id;
                       }
                  }
                  
                  printf("\n\n-----------------Selectionnez la profession a modifier-------------\n");
                  for(int i=0;i<num_of_elem;i++){
                      for(int j=0;j<=size;j++){
                          if(list_id_pour_modf[i]==list_ToDo[j].id){
                             printf("------Taches %d --- \n",i+1);
                             printf("Titre : %s \n" ,list_ToDo[j].titre);
                          };
                        }
                  }
                  printf("==>");
                  scanf("%d",&element_rechercher);
}


int main(){
        int size=-1;
        struct ToDos *list_ToDo;
        list_ToDo=malloc(1*sizeof(struct ToDos));

        // 1 - Ajouter une nouvelle tache
            int copy_seze;
            int nomber_element_ajou;
            int numero_element_ajouter=0;

        //2 - Afficher la liste de toutes les taches
         int type_tri;
         int afficher_3=0;
        //3 - Modifier une tâche:
         char titre_mdf[100];
        
         int element_rechercher ;
         int confrm_chnge_titre;
         int confrm_chnge_description;
         int confrm_chnge_deadline;

        char choix;
        printf("\nbonjour Voici le : \n");
        fun_choix(&choix);
        while(choix != '9'){
 
            switch(choix){
               case '1':
                printf("entrez nombre des element qui vout pouver ajouter : ");
                scanf("%d",&nomber_element_ajou);

                if(nomber_element_ajou==1){              
                        //kanbadal size for add a new todo
                          size++;
                          list_ToDo=realloc(list_ToDo,(size+1)*sizeof(struct ToDos));
     
                      list_ToDo[size].id=size;
                      getchar();
                      printf("Entrez la titre de la tache : ");
                      fgets(list_ToDo[size].titre,100,stdin);
                      list_ToDo[size].titre[strcspn(list_ToDo[size].titre,"\n")]='\0';
                      printf("Entrez la description de la tache : ");
                      fgets(list_ToDo[size].description,300,stdin);
                      list_ToDo[size].description[strcspn(list_ToDo[size].description,"\n")]='\0';
                      strcpy(list_ToDo[size].statut,"non terminee");
     
                      printf("Entrez le temps que prendra la tache par jours : ");
                      scanf("%d",&list_ToDo[size].deadline);
     
                      //date de creation tache
                      time_t now;
                      time(&now);
                      strcpy(list_ToDo[size].date_creation,ctime(&now));
     
                      //date de creation tache
                       list_ToDo[size].date_fin=time(&now)+(list_ToDo[size].deadline * 24 * 60 * 60);
                 }else{
                       copy_seze=size;
                       size+=nomber_element_ajou;
                       list_ToDo=realloc(list_ToDo,(size+1)*sizeof(struct ToDos));

                       for(int i=copy_seze+1;i<=size;i++){
                            numero_element_ajouter++;
                            list_ToDo[i].id=i;
                            getchar();
                            printf("\n\n la tache => %d :  \n",numero_element_ajouter);
                            printf("Entrez la titre de la tache : ");
                            fgets(list_ToDo[i].titre,100,stdin);
                            list_ToDo[i].titre[strcspn(list_ToDo[i].titre,"\n")]='\0';
                            printf("Entrez la description de la tache : ");
                            fgets(list_ToDo[i].description,300,stdin);
                            list_ToDo[i].description[strcspn(list_ToDo[i].description,"\n")]='\0';
            
                            printf("Entrez le temps que prendra la tache par jours : ");
                            scanf("%d",&list_ToDo[i].deadline);
                            strcpy(list_ToDo[i].statut,"non terminee");
            
                            //date de creation tache
                            time_t now;
                            time(&now);
                            strcpy(list_ToDo[i].date_creation,ctime(&now));
            
                            //date de creation tache
                             list_ToDo[i].date_fin=time(&now)+(list_ToDo[i].deadline * 24 * 60 * 60);
                       }
                       numero_element_ajouter=0;
                 }
                fun_choix(&choix);
                 break;

            case '2':  
                if(size==-1){
                    printf("\n\n------------------------------------------------------\n ----> l n'y a pas de taches pour le moment    |\n------------------------------------------------------\n\n");
                }else{

                   printf("\n\n Choisissez le type de tri que vous souhaitez: \n1 - pour Trier les taches par ordre alphabetique du Titre \n2 - pour Trier les taches par deadline \n3 - pour Afficher les taches dont le deadline est dans 3 jours ou moins \n ===> ");

                   scanf("%d",&type_tri);
                   struct ToDos tmp_ToDo;
                   if(type_tri == 1){
                        for(int i=0;i<=size;i++){
                               for(int j=i+1;j<=size;j++){
                                  if(strcmp(list_ToDo[i].titre,list_ToDo[j].titre)>0){
                                        tmp_ToDo=list_ToDo[i];
                                        list_ToDo[i]=list_ToDo[j];
                                        list_ToDo[j]=tmp_ToDo;
                                  }
                               }
                        }
                   }else if(type_tri == 2){
                          for(int i=0;i<=size;i++){
                               for(int j=i+1;j<=size;j++){
                                  if(list_ToDo[i].deadline>list_ToDo[j].deadline){
                                        tmp_ToDo=list_ToDo[i];
                                        list_ToDo[i]=list_ToDo[j];
                                        list_ToDo[j]=tmp_ToDo;
                                  }
                               }
                        }
                   }else{
                       printf("\n-------------------------Taches ToDo-------------------------------\n\n");
                       
                       for(int i=0;i<=size;i++){
                          if(list_ToDo[i].deadline>=3 && list_ToDo[i].deadline<=30){
                              afficher_3++;
                              printf("---Taches {%d} -----------------\n",afficher_3);
                              printf("----------> Titre : %s \n",list_ToDo[i].titre);
                              printf("----------> Description : %s \n",list_ToDo[i].description);
                              printf("----------> Deadline : %d \n",list_ToDo[i].deadline);
                              printf("----------> Date de creation : %s \n",list_ToDo[i].date_creation); 
                              printf("----------> Statut : %s \n",list_ToDo[i].statut);
                              printf("___________________________________________________________________________\n\n");
                          }
                         
                       }
                       afficher_3=0;
                   }

                }


               if(type_tri<=2){
                    printf("\n-------------------------Taches ToDo-------------------------------\n\n");
                    for(int i=0;i<=size;i++){
                      printf("---Taches {%d} -----------------\n",i+1);
                      printf("----------> Titre : %s \n",list_ToDo[i].titre);
                      printf("----------> Description : %s \n",list_ToDo[i].description);
                      printf("----------> Deadline : %d \n",list_ToDo[i].deadline);
                      printf("----------> Date de creation : %s \n",list_ToDo[i].date_creation); 
                      printf("----------> Statut : %s \n",list_ToDo[i].statut);
                      printf("___________________________________________________________________________\n\n");
                    }
               }
                

                fun_choix(&choix);

                break;

            case '3': 
                  
                  printf("\nEntrez le titre de la tache : " );
                  getchar();
                  fgets(titre_mdf,100,stdin);
                  titre_mdf[strcspn(titre_mdf,"\n")]='\0';

                  for (int i=0;i<=size;i++){
                       if(strstr(list_ToDo[i].titre,titre_mdf) != NULL){
                             num_of_elem++;
                             //hna kanzid size dyal list id kol mara kal9a joz2 mn ism tach kayn
                             list_id_pour_modf=realloc(list_id_pour_modf,num_of_elem*sizeof(int));
                             list_id_pour_modf[num_of_elem-1]=list_ToDo[i].id;
                       }
                  }
                  
                  printf("\n\n-----------------Selectionnez la profession a modifier-------------\n");
                  for(int i=0;i<num_of_elem;i++){
                      for(int j=0;j<=size;j++){
                          if(list_id_pour_modf[i]==list_ToDo[j].id){
                             printf("------Taches %d --- \n",i+1);
                             printf("Titre : %s \n" ,list_ToDo[j].titre);
                          };
                        }
                  }
                  printf("==>");
                  scanf("%d",&element_rechercher);

                  printf("Voulez-vous changer le titre du tache (1 pour oui 0 pour non) ? : ");
                  scanf("%d",&confrm_chnge_titre);
                  if(confrm_chnge_titre==1){
                        printf("Donnez le nouveau titre : ");\
                        getchar();
                        fgets(list_ToDo[list_id_pour_modf[element_rechercher-1]].titre,100,stdin);
                        list_ToDo[list_id_pour_modf[element_rechercher-1]].titre[strcspn(list_ToDo[list_id_pour_modf[element_rechercher-1]].titre,"\n")]='\0';
                  }
                  confrm_chnge_titre=0;

                  printf("Voulez-vous changer le description du tache (1 pour oui 0 pour non) ? : ");
                  scanf("%d",&confrm_chnge_description);
                  if(confrm_chnge_description==1){
                        printf("Donnez le nouveau description : ");
                        getchar();
                        fgets(list_ToDo[list_id_pour_modf[element_rechercher-1]].description,300,stdin);
                  }
                   
                   list_ToDo[list_id_pour_modf[element_rechercher-1]].description[strcspn(list_ToDo[list_id_pour_modf[element_rechercher-1]].description,"\n")]='\0';
                  confrm_chnge_description=0;

                  printf("Voulez-vous changer le deadline du tache (1 pour oui 0 pour non) ? : ");
                  scanf("%d",&confrm_chnge_deadline);
                  if(confrm_chnge_deadline==1){
                        printf("Donnez le nouveau deadline : ");
                        scanf("%d",&list_ToDo[list_id_pour_modf[element_rechercher-1]].deadline);
                      
                  }
                 
                   confrm_chnge_deadline=0;
                  
                   fun_choix(&choix);
                   break;

            case '4':
                  

            }
           
 
        }



  return 0;
}
