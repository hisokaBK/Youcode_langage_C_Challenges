#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int n;
    printf("entrez le nomber des elements : ");
    scanf("%d",&n);

    int T[n];

    printf("vous pouvez remplir le tableau  : \n");

    for (int i=0;i<n;i++){
           printf("T[%d] <---- ",i);
           scanf("%d",&T[i]);
    }
     
    int change ;

    for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 if(T[i]>T[j]){
                      change=T[i];
                      T[i]=T[j];
                      T[j]=change;
                 }
            }
    }

    printf("le tableau en ordre coissant : \n");
    for(int i=0;i<n;i++){
          printf("------->%d \n",T[i]);
      }

    return 0;
}