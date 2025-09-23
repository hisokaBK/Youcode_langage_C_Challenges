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

    for(int i=0;i<n/2;i++){
           change = T[i];
           T[i]=T[n-i-1];
           T[n-i-1]=change;
    }


        printf("le table inverse : \n");
    

    for (int i=0;i<n;i++){
          printf("T[%d] <--- %d \n",i,T[i]);
    }

    return 0;
}