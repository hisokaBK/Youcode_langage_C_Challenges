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

    printf("les nomber paire dans le table : \n");

    for(int i=0;i<n;i++){
           if(T[i]%2==0){
                printf("%d \n",T[i]);
           }
    }

    return 0;
}