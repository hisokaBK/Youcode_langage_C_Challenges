#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define len_char 100

void fun_choix (char *choix){
        printf("\n\n -------------------------|| MENU PRINCIPAL ||-------------------------------  \n\n{chaque nombre represente une fonction } \n\n1 ----> Ajouter un animal \n2 ----> Afficher la liste de toutes Afficher les animaux \n3 ----> Modifier un animal \n4 ----> Supprimer un animal \n5 ----> Rechercher un animal \n6 ----> Statistiques \n7 ----> EXIT \n____________________________________________________________________________\n\n==>");
        scanf(" %c",&*choix);
        printf("\n__________________________________________________________\n\n");
}    

struct animals{
       int id;
       char nom[len_char];
       char espece[len_char];
       int age ;
       char habitat[len_char];
       float poids ;
       char date_arrivee[len_char];
       char categorie[len_char];

};

void afficher_list_animal (struct animals anm[] ,int size ){
                printf("\n-------------------------| LISTE ANIMAUX |-------------------------------\n\n");
                            
                  for(int i=0;i<size;i++){
                    printf("---Animal { %d } -----------------\n\n",i+1);
                    printf("----------> id  :  %d \n",anm[i].id);
                    printf("----------> le date d'arrivee de l'animal  :  %s \n",anm[i].date_arrivee);
                    printf("----------> le nom de l'animal  :  %s \n",anm[i].nom);
                    printf("----------> l'age de l'animal   :  %d \n",anm[i].age);
                    printf("----------> l'espece de l'animal  :  %s \n",anm[i].espece);
                    printf("----------> l'habitat de l'animal   :  %s \n",anm[i].habitat); 
                    printf("----------> le poids de l'animal  :  %.2f \n",anm[i].poids);
                    printf("----------> la categorie auquel appartient l'animal  :  %s \n",anm[i].categorie);
                    printf("___________________________________________________________________________\n\n");
                        }
}

int recherche_animal_index_name (struct animals rech[],int size){ //katraj index dyal animal mn khilal nom dyalo
          
                int new_size=0;
                int get_index;
                int *list_ids=malloc(new_size*sizeof(int)); //list 4adi n3amarha b ids dyal animals
                char name_animal[len_char];

                printf("\n\nentrez le nom de l'animal : ");
                getchar();
                fgets(name_animal,len_char,stdin);
                name_animal[strcspn(name_animal,"\n")]='\0';
                
                int num_animal ;
                
                for(int i=0;i<size;i++){
                      if(strstr(rech[i].nom,name_animal)!=NULL){
                           new_size++;
                           list_ids=realloc(list_ids,new_size*sizeof(int));
                           list_ids[new_size-1]=rech[i].id;
                           printf("\n ---> { %d } - nom : %s | habitat : %s ",new_size,rech[i].nom,rech[i].habitat);
                      }
                }
                if(new_size>0){
                  printf("\n\nEntrez le numero de l'animal  (1 a %d ) : ",new_size);
                  scanf("%d",&num_animal); 

                   for(int i=0;i<size;i++){
                          if(rech[i].id==list_ids[num_animal-1]){
                                get_index=i;
                                break;
                          }
                   }

                  return get_index;

                }else{
                      printf("\n\n------------------------------------------------------------------------------\n ----> Il n'y a aucun animal avec ce nom  !!     |\n------------------------------------------------------------------------------\n\n");
                      return -1;
                }
            
}

void fun_habitat (struct animals anim[],int n_size){
           struct animals tampstrut ;
           for(int i=0;i<n_size;i++){
                  for(int j=i+1;j<n_size;j++){
                       if(strcasecmp(anim[i].habita,anim[j].habita)>0){
                               tampstrut=anim
                       }
                  }
           }
}




int main(){
        //date arrivee de l'animal

         time_t(hello);
         time(&hello);
         struct tm *new_day=localtime(&hello);

         //var bach nb9a nzid size dyal struct animal

         int size=20;
         int cpy_size; //ajouter plusieurs 
         int id_animal=20;
         char categorie_animal;
         
         struct animals *animal;
         animal = malloc(size*sizeof(struct animals));
          struct animals default_animals[20] = {
             {1, "leo", "lion", 5, "savane", 190.5, "Wed Oct  1 14:24:19 2012", "carnivores"},
             {2, "mimi", "chat", 3, "maison", 4.2, "mon Oct  2 14:24:19 2013", "herbivores"},
             {3, "coco", "perroquet", 2, "foret tropicale", 1.1, "san Oct  1 14:24:19 2020", "omnivores"},
             {4, "bibi", "lapin", 1, "prairie", 2.3, "Wed Oct  1 14:24:19 2017", "herbivores"},
             {5, "dumbo", "Elephant", 10, "savane", 540.7, "san Oct  1 14:24:19 2016", "herbivores"},
             {6, "kiki2", "chien", 6, "maison", 20.0, "thr Oct  1 14:24:19 2010", "carnivores"},
             {7, "nemo", "poisson-clown", 1, "Ocean", 0.2, "Wed Oct  1 14:24:19 2020", "omnivores"},
             {8, "kiki", "perroquet", 4, "foret tropicale", 1.3, "2Wed Oct  1 14:24:19 2023", "omnivores"},
             {9, "felix", "chat", 7, "maison", 5.0, "san Oct  1 14:24:19 2022", "herbivores"},
             {10, "kiki1", "hippopotame", 12, "Riviere", 1500.0, "Wed Oct  1 14:24:19 2019", "herbivores"},
             {11, "lulu", "lion", 3, "Riviere", 12.5, "Wed Oct  1 14:24:19 2017", "herbivores"},
             {12, "bella", "chien", 2, "maison", 18.0, "san Oct  1 14:24:19 2010", "carnivores"},
             {13, "toto", "lion", 50, "plage", 80.0, "Wsed Oct  3 14:24:19 2020", "carnivores"},
             {14, "polo", "pingouin", 5, "Antarctique", 25.0, "Wed Oct  1 14:24:19 2021", "omnivores"},
             {15, "kiki3", "Rat", 1, "laboratoire", 0.5, "san Oct  1 14:24:19 2023", "omnivores"},
             {16, "gigi", "lion", 8, "savane", 800.0, "san Oct  2 14:24:19 2024", "herbivore"},
             {17, "lililo", "chien", 4, "maison", 22.0, "Wed Oct  1 14:24:19 2020", "carnivores"},
             {18, "sasha", "serpent", 6, "desert", 15.0, "san Oct  1 14:24:19 2011", "carnivores"},
             {19, "momo", "lion", 7, "Jungle", 35.0, "Wed Oct  1 14:24:19 2011", "herbivores"},
             {20, "lili", "lapin", 2, "prairie", 2.1, "san Oct  3 4:24:19 2010", "herbivores"}
             };

             for (int i = 0; i < size; i++) {
                 animal[i] = default_animals[i];
             }


        //1. Ajouter un animal

          int number_animals_ajouter;
          int animal_index=0;
          char new_name[len_char];
          int name_animal_exists=0;

        //2. Afficher les animaux
           
          char type_tri ;
          struct animals tamp_animal ;   //<-- pour le tri (nom / age) 
          int size2_anm_ctg=0;
          char habitat_animal[len_char]; //<--habita rechercher
          struct animals *animal_ctg;    //<--hadi bach ngroupy animals b habitat dyalhom
          animal_ctg=malloc(size2_anm_ctg*sizeof(struct animals));

         //3. modifier un animal 
           int index_animal ;
           char to_change[]={'0','0','0','0','0','0'};

         //4. Supprimer un animal 

              int conferm_supprition ;

         //5 . Rechercher un animal
            char type_recherche ;
            int id_pour_recherche;
            int index_rechercher=-1;

            int nom_pour_recherche;

            char espece_pour_recherche[len_char];
            int espece_animal_place=0;
            

         
         //6. Statistiques

         int nombre_total_anim=0;

         int somme_ages=0;

         int min_age=animal[0].age;
         char jeune_animal[len_char];
         strcpy(jeune_animal,animal[0].nom);
         int max_age=animal[0].age;
         char plus_vieux[len_char];
         strcpy(plus_vieux,animal[0].nom);

         char list_especes[len_char][len_char];
         int list_total_animal_espece[100];
         int size_list_es=0;
         int max_somme_es=0;
         int tmp_somme=0;
         int index_max_es;
         


        char choix;
        printf("\n======================================================================================\n|             bonjour            =- %d:%d:%d -=            ==- %d/%d/%d -==          |\n======================================================================================\n",new_day->tm_hour,new_day->tm_min,new_day->tm_sec,new_day->tm_mday,new_day->tm_mon+1,new_day->tm_year+1900);

        fun_choix(&choix);
         while(choix != '7'){
            switch(choix){

                case '1':// ==> 1. Ajouter un animal

                    printf("\nEntrez le nombre d'animaux que vous souhaitez ajouter : ");
                    scanf("%d",&number_animals_ajouter);
                    getchar();

                    if(number_animals_ajouter==1){              
                          size++;
                          animal=realloc(animal,size*sizeof(struct animals));
                          
                          animal[size-1].id=++id_animal;
                          time_t arrivee;
                          time(&arrivee); 
                          strcpy(animal[size-1].date_arrivee,ctime(&arrivee));

                          printf("\nEntrez le nom de l'animal : ");
                          fgets(new_name,len_char,stdin);
                          new_name[strcspn(new_name,"\n")]='\0';

                          for(int i=0;i<size;i++){
                                if(strcasecmp(new_name,animal[i].nom)==0){
                                    name_animal_exists++;
                                }
                          }

                          if(name_animal_exists == 0){
                                   strcpy(animal[size-1].nom,new_name);
                          }else{
                                printf("\n\n------------------------------------------------------------------------------\n ----> Cet animal existe deja, ou le nom est duplique  !!           |\n------------------------------------------------------------------------------\n\n");
                                name_animal_exists=0;
                                fun_choix(&choix);
                                 break;

                          }

                          printf("Entrez l'espece de l'animal : ");
                          fgets(animal[size-1].espece,len_char,stdin);
                          animal[size-1].espece[strcspn(animal[size-1].espece,"\n")]='\0';

                          printf("entrez l'age de l'animal (1 a 100) : ");
                          scanf("%d",&animal[size-1].age);
                          
                          printf("Entrez l'habitat  de l'animal : ");
                          getchar();
                          fgets(animal[size-1].habitat,len_char,stdin);
                          animal[size-1].habitat[strcspn(animal[size-1].habitat,"\n")]='\0';

                          printf("entrez la poids de l'animal (1.0 a 100.0) : ");
                          scanf("%f",&animal[size-1].poids);
                          getchar();

                          do{
                                printf("choisissez la categorie  de l'animal :\n1 ---> carnivoress  \n2 ---> herbivores  \n3 ---> omnivores  \n==>");
                                scanf("%c",&categorie_animal);
                                getchar();

                                switch(categorie_animal){
                                    case '1':
                                      strcpy(animal[size-1].categorie,"carnivoress ");
                                       break;
                                    case '2':
                                       strcpy(animal[size-1].categorie,"herbivores");
                                       break;
                                    case '3':
                                       strcpy(animal[size-1].categorie,"omnivores");
                                       break;
                                    default :
                                        printf("\ncette option n'existe pas \n");
                                }
                            }while(categorie_animal!='1' && categorie_animal!='2' && categorie_animal!='3');

                    }else{  
                            cpy_size=size;
                            size+=number_animals_ajouter;
                            animal=realloc(animal,size*sizeof(struct animals));
                            for(int i=cpy_size;i<size;i++){

                                animal[i].id=++id_animal;

                                time_t arrivee;
                                time(&arrivee); 
                                strcpy(animal[i].date_arrivee,ctime(&arrivee));

                                printf("\n\n-----l'animal => %d :----  \n\n",++animal_index);

                                printf("Entrez le nom de l'animal : ");
                                fgets(animal[i].nom,len_char,stdin);
                                animal[i].nom[strcspn(animal[i].nom,"\n")]='\0';
         
                                printf("Entrez l'espece de l'animal : ");
                                fgets(animal[i].espece,len_char,stdin);
                                animal[i].espece[strcspn(animal[i].espece,"\n")]='\0';
         
                                printf("entrez l'age de l'animal  (1 a 100)  : ");
                                scanf("%d",&animal[i].age);
                                getchar();
         
                                printf("Entrez l'habitat  de l'animal : ");
                                fgets(animal[i].habitat,len_char,stdin);
                                animal[i].habitat[strcspn(animal[i].habitat,"\n")]='\0';
         
                                printf("entrez la poids de l'animal  (1.0 a 100.0)  : ");
                                scanf("%f",&animal[i].poids);
                                getchar();

                               do{
                                    printf("choisissez la categorie  de l'animal (1 a 3)  :\n1 ---> carnivoress  \n2 ---> herbivores  \n3 ---> omnivores  \n==>");
                                    scanf(" %c",&categorie_animal);
                                    getchar();

                                    switch(categorie_animal){
                                        case '1':
                                          strcpy(animal[i].categorie,"carnivoress");
                                           break;
                                        case '2':
                                           strcpy(animal[i].categorie,"herbivores");
                                           break;
                                        case '3':
                                           strcpy(animal[i].categorie,"omnivores");
                                           break;
                                        default :
                                            printf("\n\n------------------------------------------------------------------------------\n ----> cette option n'existe pas  !!   |\n------------------------------------------------------------------------------\n\n"); 
                                    
                                    }
                               }while(categorie_animal!='1' && categorie_animal!='2' && categorie_animal!='3' );

                            }
                            animal_index=0;
                    }

                    fun_choix(&choix);
                    break;

                case '2': // ==> 2. Afficher les animaux

                    if(size==0){
                    printf("\n\n------------------------------------------------------\n ----> l n'y a pas de animals (zoo vide)  !!    |\n------------------------------------------------------\n\n");
                     }else{

                    printf("\n\n-------------------------| MENU d'AFFICHAGE   |-------------------------------\n\n{chaque nombre represente une fonction } \n\n1 ----> Afficher la liste complete  \n2 ----> Afficher la liste complete avec trier par nom des animaux\n3 ----> Afficher la liste complete trier par age des animaux \n4 ----> Afficher uniquement les animaux d'un habitat specifique\n________________________________________________________\n\n==>");
                    getchar();
                    scanf("%c",&type_tri);
                    getchar();

                    switch(type_tri){
                        case '1':
                             afficher_list_animal(animal,size);
                             break;

                        case '2': //<-- tri par nom
                            for (int i=0;i<size;i++){
                                  for(int j=i+1;j<size;j++){
                                        if(strcasecmp(animal[i].nom,animal[j].nom)>0){
                                              tamp_animal=animal[i];
                                              animal[i]=animal[j];
                                              animal[j]=tamp_animal;

                                        }
                                  }
                            }

                           afficher_list_animal(animal,size);
                           break ;

                        case '3': //<-- tri par age
                                for (int i=0;i<size;i++){
                                  for(int j=i+1;j<size;j++){
                                        if(animal[i].age>animal[j].age){
                                              tamp_animal=animal[i];
                                              animal[i]=animal[j];
                                              animal[j]=tamp_animal;

                                        }
                                  }
                            }

                           afficher_list_animal(animal,size);
                           break ;

                        case '4': //<-- habita rechercher
                                 printf("\nEntrez l'habitat Que vous recherchez :  ");
                                 fgets(habitat_animal,len_char,stdin);
                                 habitat_animal[strcspn(habitat_animal,"\n")]='\0';
                                   
                                    for(int i=0;i<size;i++){
                                         if(strcmp(animal[i].habitat,habitat_animal)==0){
                                               size2_anm_ctg++;
                                               animal_ctg=realloc(animal_ctg,size2_anm_ctg*sizeof(struct animals));
                                               animal_ctg[size2_anm_ctg-1]=animal[i];
                                         } 
                                      }
                              if(size2_anm_ctg>0){
                                 afficher_list_animal(animal_ctg,size2_anm_ctg);
                              }else{
                                 printf("\n\n------------------------------------------------------------------------------\n ----> Il n'y a aucun animal qui appartient a cette famille habitat  !!   |\n------------------------------------------------------------------------------\n\n");
                              }
                                 size2_anm_ctg=0;
   
                           break;
                           

                        default :
                                   printf("\n\n------------------------------------------------------------------------------\n ----> cette option n'existe pas  !!   |\n------------------------------------------------------------------------------\n\n");  
                                           
                    }

                }

                  fun_choix(&choix);
                  break;

            case '3' :// ==>3. modifier un animal
                  index_animal =recherche_animal_index_name(animal,size);
                  getchar();
                  printf("\nVous voulez changer le nom (entrer 1 pour oui 0 pour non ) : ");
                  scanf("%c",&to_change[0]);
                  getchar();
                  if(to_change[0]=='1'){
                       printf("Entrez le nouveau nom : ");
                       fgets(animal[index_animal].nom,len_char,stdin);
                       animal[index_animal].nom[strcspn(animal[index_animal].nom,"\n")]='\0';
                  }

                  printf("\nVous voulez changer l'age (entrer 1 pour oui 0 pour non ) : ");
                  scanf("%c",&to_change[1]);
                  

                  if(to_change[1]=='1'){
                       printf("Entrez le nouveau age : ");
                       scanf("%d",&animal[index_animal].age);
                       
                  }

                  
                  printf("\nVous voulez changer le espece (entrer 1 pour oui 0 pour non ) : ");
                  scanf(" %c",&to_change[2]);
                   getchar();
                  if(to_change[2]=='1'){
                       printf("Entrez le nouveau espece : ");

                       fgets(animal[index_animal].espece,len_char,stdin);
                       animal[index_animal].espece[strcspn(animal[index_animal].espece,"\n")]='\0';
                  }

                  printf("\nVous voulez changer l'habitat (entrer 1 pour oui 0 pour non ) : ");
                  scanf("%c",&to_change[3]);
                  getchar();
                  if(to_change[3]=='1'){
                       printf("Entrez la nouveau habitat  : ");
                       fgets(animal[index_animal].habitat,len_char,stdin);
                       animal[index_animal].habitat[strcspn(animal[index_animal].habitat,"\n")]='\0';
                  }

                  printf("\nVous voulez changer le poids (entrer 1 pour oui 0 pour non ) : ");
                  scanf("%c",&to_change[4]);
                   
                  if(to_change[4]=='1'){
                       printf("Entrez le nouveau poids  : ");
                       scanf("%d",&animal[index_animal].poids);
                     
                  }

                  printf("\nVous voulez changer la categorie (entrer 1 pour oui 0 pour non ) : ");
                  scanf(" %c",&to_change[5]);
                
                  if(to_change[5]=='1'){
                       printf("Entrez le nouveau categorie  : ");
                       fgets(animal[index_animal].categorie,len_char,stdin);
                       animal[index_animal].categorie[strcspn(animal[index_animal].categorie,"\n")]='\0';
                  }

                  fun_choix(&choix);
                  break;

            case '4':// ==> 4. Supprimer un animal 
                  index_animal =recherche_animal_index_name(animal,size);
                  printf("\ntu sur que tu veux supprimer ?  (1 pour oui 0 pour non)  : ");
                  scanf("%d",&conferm_supprition);

                  if(conferm_supprition==1){
                     for(int i=index_animal;i<size;i++){
                          animal[i]=animal[i+1];
                  }
                  size--;
                  animal=realloc(animal,size*sizeof(struct animals));
                  }else{
                        printf("\n\n------------------------------------------------------------------------------\n ---->     Suppression annulee  !!       |\n------------------------------------------------------------------------------\n\n");
                  }
                  
                  fun_choix(&choix);
                  break;

            case '5':// ==> 5. Rechercher un animal
                 
                 printf("\n\n-------------------------| MENU DE RECHERCHE   |-------------------------------\n\n{chaque nombre represente une fonction } \n\n1 ----> Rechercher par id \n2 ----> Rechercher par nom\n3 ----> Rechercher par espece \n________________________________________________________\n\n==>");

                 scanf(" %c",&type_recherche);
                 switch(type_recherche){
                     case '1':
                           printf("\nentrez id d'animal : ");
                           scanf("%d",&id_pour_recherche);
                           for(int i=0;i<size;i++){
                                if(id_pour_recherche==animal[i].id){
                                    index_rechercher=i;
                                    break;
                                }
                           }
                           if(index_rechercher==-1){
                                printf("\n\n------------------------------------------------------------------------------\n ----> Il n'y a aucun animal avec ce id  !!   |\n------------------------------------------------------------------------------\n\n");
                           }else{
                                    printf("\n-------------------------| RECHERCHE PAR ID |-------------------------------\n\n");
                                    printf("----------> le date d'arrivee de l'animal  :  %s \n",animal[index_rechercher].date_arrivee);
                                    printf("----------> le nom de l'animal  :  %s \n",animal[index_rechercher].nom);
                                    printf("----------> l'age de l'animal   :  %d \n",animal[index_rechercher].age);
                                    printf("----------> l'espece de l'animal  :  %s \n",animal[index_rechercher].espece);
                                    printf("----------> l'habitat de l'animal   :  %s \n",animal[index_rechercher].habitat); 
                                    printf("----------> le poids de l'animal  :  %.2f \n",animal[index_rechercher].poids);
                                    printf("----------> la categorie auquel appartient l'animal  :  %s \n",animal[index_rechercher].categorie);
                                    printf("___________________________________________________________________________\n\n");
                           }
                        break ;

                    case '2':

                       nom_pour_recherche=recherche_animal_index_name(animal,size);
                        printf("\n-------------------------| RECHERCHE PAR NOM |-------------------------------\n\n");
                        printf("----------> le date d'arrivee de l'animal  :  %s \n",animal[nom_pour_recherche].date_arrivee);
                        printf("----------> le nom de l'animal  :  %s \n",animal[nom_pour_recherche].nom);
                        printf("----------> l'age de l'animal   :  %d \n",animal[nom_pour_recherche].age);
                        printf("----------> l'espece de l'animal  :  %s \n",animal[nom_pour_recherche].espece);
                        printf("----------> l'habitat de l'animal   :  %s \n",animal[nom_pour_recherche].habitat); 
                        printf("----------> le poids de l'animal  :  %.2f \n",animal[nom_pour_recherche].poids);
                        printf("----------> la categorie auquel appartient l'animal  :  %s \n",animal[nom_pour_recherche].categorie);
                        printf("___________________________________________________________________________\n\n");
                          
                        break;
                     
                    case '3':
                        
                        printf("\n\nEntrez l'espece pour commencer la recherche : ");
                        getchar();
                        fgets(espece_pour_recherche,len_char,stdin);
                        espece_pour_recherche[strcspn(espece_pour_recherche,"\n")]='\0';

                        printf("\n-------------------------| RECHERCHE PAR ESPECE |-------------------------------\n\n");

                        for(int i=0;i<size;i++){
                             if(strcmp(espece_pour_recherche,animal[i].espece)==0){
                                    espece_animal_place++;
                                    printf("---Animal { %d } -----------------\n\n",espece_animal_place);
                                    printf("----------> le date d'arrivee de l'animal  :  %s \n",animal[i].date_arrivee);
                                    printf("----------> le nom de l'animal  :  %s \n",animal[i].nom);
                                    printf("----------> l'age de l'animal   :  %d \n",animal[i].age);
                                    printf("----------> l'espece de l'animal  :  %s \n",animal[i].espece);
                                    printf("----------> l'habitat de l'animal   :  %s \n",animal[i].habitat); 
                                    printf("----------> le poids de l'animal  :  %.2f \n",animal[i].poids);
                                    printf("----------> la categorie auquel appartient l'animal  :  %s \n",animal[i].categorie);
                                    printf("___________________________________________________________________________\n\n");
                             }
                        } 
                         if(espece_animal_place==0){
                            printf("\n\n------------------------------------------------------------------------------\n ----> Il n'y a aucun animal dans cette espece  !!   |\n------------------------------------------------------------------------------\n\n");
                         }else{
                              espece_animal_place=0;
                         }

                         break;

                    default :
                            printf("\n\n------------------------------------------------------------------------------\n ----> cette option n'existe pas  !!   |\n------------------------------------------------------------------------------\n\n");  
                    
                 }

                 fun_choix(&choix);
                 break;
            case '6'://<--- 6. Statistiques

                    printf("\n-------------------------|| Statistiques ||-------------------------------\n\n");
                    for(int i=0;i<size;i++){
                         nombre_total_anim++;
                         somme_ages+=animal[i].age;
                         if(min_age>animal[i].age){
                              min_age=animal[i].age;
                              strcpy(jeune_animal,animal[i].nom);
                         }
                         if(max_age<animal[i].age){
                              max_age=animal[i].age;
                              strcpy(plus_vieux,animal[i].nom);
                         }

                          
                          size_list_es++;
                         int trouve = 0;//check wax smiya espece deja dakhlat
                         for(int j=0;j<size_list_es;j++){
                               if(strcmp(animal[i].espece,list_especes[j])==0){
                                    trouve=1;
                                    break;
                               }
                         }

                         if(trouve == 0){
                              strcpy(list_especes[size_list_es-1],animal[i].espece);
                         }

                    }

                    
                    for(int i=0;i<size_list_es;i++){
                        for(int j=0;j<size;j++){
                            if(strcmp(list_especes[i],animal[j].espece)==0){
                                 tmp_somme++;
                            }
                        }
                        list_total_animal_espece[i]=tmp_somme;
                        tmp_somme=0;
                    }

                    for(int i=0;i<size_list_es;i++){
                          if(max_somme_es<list_total_animal_espece[i]){
                               max_somme_es=list_total_animal_espece[i];
                               index_max_es=i;
                          }
                    }



                    printf("----------> Nombre total d'animaux dans le zoo :  %d \n",nombre_total_anim);
                    printf("----------> Age moyen des animaux. :  %d \n",somme_ages/nombre_total_anim);
                    printf("----------> l'animal le Plus vieux  :  %s de age %d \n",plus_vieux,max_age);
                    printf("----------> l'animal le plus jeune   :  %s de age %d \n",jeune_animal,min_age);
                    printf("----------> Espece la plus representee : %s avec %d animaux\n",list_especes[index_max_es], max_somme_es);

                    nombre_total_anim=0;
                    somme_ages=0;
                    size_list_es=0;
                   
                    fun_choix(&choix);
                  break;
               
               default :
                     printf("\n\n------------------------------------------------------------------------------\n ----> cette option n'existe pas  !!   |\n------------------------------------------------------------------------------\n\n");  
                     fun_choix(&choix);

                    
               }
           }

    return 0;
}