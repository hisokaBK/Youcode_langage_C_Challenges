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

    int max =T[0];

    for (int i=1;i<n;i++){
           if(max<T[i]){
                 max=T[i];
           }
    }

    printf("le maximum du table est : %d",max);
     
    return 0;
}