#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stock_max_de_librairie 100;

int main(){
    
    char titre[stock_max_de_librairie][13],auteur[stock_max_de_librairie][13];
    int quantite[stock_max_de_librairie];
    float prix[stock_max_de_librairie];
    int size=-1;

    //1 -Ajouter un livre au stock. livre exists
    int is_exists=0,index_ext;
    char name_liv[40];
    int add_stock_livre;
    //3 - Rechercher un livre par son titre.
    char rechercher[40] ;
    int num_rech;
    //4 - Mettre a jour la quantite d'un livre.
    int m_jour , index_to_change;
    //5 - Supprimer un livre du stock.
    int index_Supprimer;
    //6 - Afficher le nombre total de livres en stock.
    int  nombre_liver_en_stock=0;


    int choi;
    printf("bonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");

    scanf("%d",&choi);

    while(choi!=7){
         switch(choi){
            case 1:
                
                printf("entrez le titre de livre : ");
                scanf("%s",name_liv);
                 
                if(size>=0){
                    for(int i=0;i<=size;i++){
                    if(strcmp(name_liv,titre[i])==0){
                        is_exists++;
                        index_ext=i;
                        

                    }
                }
            }

                if(is_exists>0){
                     printf("Le livre est deja disponible \n De combien souhaitez-vous augmenter la quantite {1 a 1000}? ");
                     scanf("%d",&add_stock_livre);
                     quantite[index_ext]+=add_stock_livre;
                     is_exists=0;
                }else{
                     size++;
                     strcpy(titre[size],name_liv);
                     printf("entrez l'auteur de livre : ");
                     //fgets(titre,sizeof(titre),stdin);
                     scanf(" %s",auteur[size]);
                     printf("entrez la quantite que vous souhaitez stocker 1 et 1000: ");
                     scanf("%d",&quantite[size]);
                     printf("entrez le prix de livre entre 0 et 10000 : ");
                     scanf("%f",&prix[size]);
                }
                    
                
                printf("\nbonjour Voici le menu  \n: \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                scanf("%d",&choi);

                break;

            case 2:

                if(size!=-1){
                     printf("voici touts les  livres : \n");
                   for(int i=0;i<=size;i++){
                         printf("livre %d : {titre -> %s,auteur -> %s,quantite -> %d,prix -> %.2f}\n",i+1,titre[i],auteur[i],quantite[i],prix[i]);
                   }
                }else{
                      printf("il ne trouve aucun livre !!!!! \n");
                }
                
                printf("\nbonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                scanf("%d",&choi);

                break;
            
            case 3: 
                printf("entrez le nom du live pour fair la rechercher : ");
                scanf(" %s",rechercher);

                for (int i=0;i<=size;i++){
                    if(strcmp(rechercher,titre[i]) != 0){
                           num_rech++;
                    }
                }
                
                if(num_rech>0){
                      printf("\n%s : ce livre est disponible : \n",rechercher);
                      num_rech=0;
                }else{
                      printf("\n%s : ce livre est Non disponible \n: ",rechercher);
                }

                printf("\nbonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                scanf("%d",&choi);
                break ;

            case 4:
                printf("entrez le nom du live pour fair la Mettre a jour la quantite : ");
                scanf(" %s",rechercher);

                for (int i=0;i<=size;i++){
                    if(strcmp(rechercher,titre[i]) == 0){
                           num_rech++;
                           index_to_change=i;
                    }
                }

                if(num_rech>0){
                      printf("entrez la nouvelle quantite : ");
                      scanf("%d",&m_jour);
                      quantite[index_to_change]=m_jour;
                      printf("la quantite de la liver %s est changer avec succes ",titre[index_to_change]);
                      num_rech=0;
                }else{
                      printf("\n%s : ce livre est Non disponible  \n: ",titre[index_to_change]);
                }

                printf("\nbonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                scanf("%d",&choi);
                break ;
            
            case 5:

                printf("entrez le nom du live pour fair la supprition : ");
                scanf(" %s",rechercher);

                for (int i=0;i<=size;i++){
                    if(strcmp(rechercher,titre[i]) == 0){
                           num_rech++;
                           index_Supprimer=i;
                    }
                }
                
                if(num_rech>0){
                      for(int i=index_Supprimer;i<=size;i++){
                            strcpy(titre[i],titre[i+1]);
                            strcpy(auteur[i],auteur[i+1]);
                            prix[i]=prix[i+1];
                            quantite[i]=quantite[i+1];
                            
                      }

                      printf("le livre est Supprimer avec succes \n");
                      num_rech=0;
                      size--;
                      
                }else{
                      printf("ce livre est Non disponible \n ");
                }

                printf("\nbonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                scanf("%d",&choi);
                break ;
 
            case 6:
                for(int i=0;i<=size;i++){
                      if(quantite[i]>0){
                            nombre_liver_en_stock+=quantite[i];
                      }
                }

                printf("\nle nombre total de livres en stock est : %d \n",nombre_liver_en_stock);
                nombre_liver_en_stock=0;

                printf("\nbonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                scanf("%d",&choi);
                break ;

            default :
                   printf("\n ===> Erreur L'option n'est pas dans la liste !!? \n");
                   printf("\nbonjour Voici le menu  : \n1 ----> Ajouter un livre au stock .\n2 ----> Afficher tous les livres disponibles .\n3 ----> Rechercher un livre par son titre .\n4 ----> Mettre a jour la quantite d'un livre .\n5 ----> Supprimer un livre du stock .\n6 ----> Afficher le nombre total de livres en stock . \n7> --->Sortie \n==> {Chaque nombre represente une fonction }!!!!\n==>");
    
                   scanf("%d",&choi);
                   break;
        }

    }

    return 0;
}