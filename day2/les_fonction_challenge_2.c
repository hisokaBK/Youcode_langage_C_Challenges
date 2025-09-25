#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void fun_Multiplication(int a,int b){

       printf("%d x %d = %d",a,b,a*b);
}

int main(){

        int a,b;
        printf("entrez le premier nombre : ");
        scanf("%d",&a);
        printf("entrez le deuxieme nombre : ");
        scanf("%d",&b);
        fun_Multiplication(a,b);

    return 0;
}