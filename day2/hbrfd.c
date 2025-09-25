#include <stdio.h>


int main(){

    
    int tab[]={1,2,3,4,5};
    int tab1[5] ;
     
    int s=0;
    for (int i=0;i<5;i++){
          for(int j=0;j<5;j++){
               if(j==i){
                  continue;
               }
               s+=tab[j];
          }

          tab1[i]=s;
          s=0;
    }
    
    int max =tab1[0];
    int min=tab1[0];

    for(int i=0;i<5;i++){
          printf("--->%d \n",tab1[i]);
    }
    
    

    return 0;
}