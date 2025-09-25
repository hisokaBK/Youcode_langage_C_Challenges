#include <stdio.h>
#include <stdlib.h>

int fun_maximum(int a,int b){
  int max ;
   if(a>b){
         max=a;
   }else{
         max=b;
   }
    return max;
}

int main(){
     int a,b;
     printf("entrez le premier nombre : ");
     scanf("%d",&a);
     printf("entrez le deuxieme nombre : ");
     scanf("%d",&b);

     printf("le plus grand nomber est : %d",fun_maximum(a,b));

    return 0;
}