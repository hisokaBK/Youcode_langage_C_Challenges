#include <stdio.h>
#include <stdlib.h>

int main(){
      int n;

      printf("entrez le nomber des elements : ");
      scanf("%d",&n);

      int T[n];

      printf("vous pouver remplir le tableau : \n");
      for (int i=0;i<n;i++){
            printf("T[%d] <--- ",i);
            scanf("%d",&T[i]);
      }

      int fct ;
      printf("entrez le factur de multiplication : ");
      scanf("%d",&fct);

      for (int i=0;i<n;i++){
            T[i]*=fct;
      }


      printf("les valeur du table apres la multiplication : \n");

      for(int i=0;i<n;i++){
           printf("T[%d] = %d \n",i,T[i]);
      }

      

    return 0;
}