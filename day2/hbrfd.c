#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 10, max = 50 , aleatoire;

    srand(time(NULL)); 

    for(int i=0; i<5; i++) {
       aleatoire = min + rand() % (max - min + 1);
        printf("%d\n", aleatoire);
    }

    return 0;
}
