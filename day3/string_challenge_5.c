#include <stdio.h>
#include <string.h>

int main(){

    char ch[10];

    printf("entrez la chaine : ");
    scanf("%s",ch);

    char cpy[10];

    strcpy(cpy,ch);

    int n =strlen(ch);
    char change;

    for(int i=0;i<n/2;i++){
           change = ch[i];
           ch[i]=ch[n-i-1];
           ch[n-i-1]=change;
    }
    
    printf("%s <---> %s",cpy,ch);

    return 0;
}