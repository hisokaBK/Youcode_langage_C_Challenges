#include <stdio.h>
#include <stdlib.h>

int fun_parite(int n){
    
     if(n%2==0){
          return 1;
     }else{
          return 0;
     }

}

int main(){
       
    int n ;
    printf("entrez un nombre entier : ");
    scanf("%d",&n);
     if(fun_parite(n)==1){
          printf("%d est un nombre pair ",n);
     }else{
          printf("%d est un nombre impair ");
     }
     

    return 0;
}