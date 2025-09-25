#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun_inversion(char *ch,int n){

          char change;

          for (int i=0;i<n/2;i++){
               change=*(ch+i);
               *(ch+i)=*(ch+(n-1-i));
               *(ch+(n-1-i))=change;
          }
          
}

int main(){
       
           char s[10];
           printf("entrez un chaine : ");
           scanf("%s",s);

           fun_inversion(s,strlen(s));

           printf("%s",s);

    return 0;
}