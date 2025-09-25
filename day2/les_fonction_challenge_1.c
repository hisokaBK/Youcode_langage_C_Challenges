#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun_somme(int a,int b){
          return a+b;
}

int main(){

    int a,b;
    printf("entrez le premier nombre : ");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d",&b);

    printf("%d + %d = %d",a,b,fun_somme(a,b));

    return 0;
}