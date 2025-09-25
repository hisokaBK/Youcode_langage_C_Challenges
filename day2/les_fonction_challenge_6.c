#include <stdio.h>
#include <stdlib.h>

void fun_fibonacci(int n ){
     int s=0;
     for (int i=1;i<=n;i++){
           s+=i;
     }

     printf("--->%d",s);

}

int main(){

      int  n;
      printf("entrez un entier : ");
      scanf("%d",&n);

      fun_fibonacci(n);

    return 0;
}