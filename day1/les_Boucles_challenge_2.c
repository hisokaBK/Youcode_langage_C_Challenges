#include <stdio.h>
#include <stdlib.h>

int main(){

     int n ,fct=1; ;
     printf("entrez un nombre entier : ");
     scanf("%d",&n);

     for(int i=2;i<=n;i++){
             fct*=i;
     }

     printf("!%d = %d",n,fct);

     return 0;
}