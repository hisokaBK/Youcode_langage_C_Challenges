#include <stdio.h>
#include <stdlib.h>

int fun_factorielle(int n){
    int f=1;
    for (int i=2;i<=f;i++){
            f*=i;
     }

    return 0;
}

int main(){

     int n;
     printf("entrez un nombre entier : ");
     scanf("%d",&n);
     
     printf("!%d = %d",n,fun_factorielle(n));

    return 0;
}