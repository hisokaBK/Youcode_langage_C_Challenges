#include <stdio.h>
#include <stdlib.h>


int main(){

    int base , exposant ;

    printf("entrez la base : ");
    scanf("%d",&base);

    printf("entrez le exposant : ");
    scanf("%d",&exposant);

    int rus=1;

    for (int i=0 ; i<exposant ;i++){
          rus=rus*base;
    }
    
    printf("%d",rus);

    return 0;
}