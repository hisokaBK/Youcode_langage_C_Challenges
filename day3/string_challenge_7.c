#include <stdio.h>
#include <string.h>

int main(){
    
    char chaine[10];
    printf("entrez une chaine : ");
    fgets(chaine,sizeof(chaine),stdin);

    for(int i=0;i<strlen(chaine);i++){
           if(chaine[i]>96){
               chaine[i]=chaine[i]-32;
           }
    }

    // for(int i=0;i<strlen(chaine);i++){
    //       switch(chaine[i]){
    //         case 'a':
    //             chaine[i]='A';
    //             break;
    //         case 'b':
    //             chaine[i]='B';
    //             break;
    //         case 'c':
    //             chaine[i]='C';
    //             break;
    //         case 'd':
    //             chaine[i]='D';
    //             break;
    //         case 'e':
    //             chaine[i]='E';
    //             break;
    //         case 'f':
    //             chaine[i]='F';
    //             break;
    //         case 'g':
    //             chaine[i]='G';
    //             break;
    //         case 'h':
    //             chaine[i]='H';
    //             break;
    //         case 'i':
    //             chaine[i]='I';
    //             break;
    //         case 'k':
    //             chaine[i]='K';
    //             break;
    //         case 'l':
    //             chaine[i]='L';
    //             break;
    //         case 'm':
    //             chaine[i]='M';
    //             break;
    //         case 'n':
    //             chaine[i]='N';
    //             break;
    //         case 'o':
    //             chaine[i]='O';
    //             break;
    //         case 'u':
    //             chaine[i]='U';
    //             break;
    //         case 'p':
    //             chaine[i]='P';
    //             break;
    //         case 'r':
    //             chaine[i]='R';
    //             break;
    //         case 's':
    //             chaine[i]='S';
    //             break;
    //         case 't':
    //             chaine[i]='T';
    //             break;
    //         case 'v':
    //             chaine[i]='V';
    //             break;
    //         case 'w':
    //             chaine[i]='W';
    //             break;
    //         case 'x':
    //             chaine[i]='X';
    //             break;
    //         case 'y':
    //             chaine[i]='Y';
    //             break;
    //         case 'z':
    //             chaine[i]='Z';
    //             break;
    //         default :
    //             chaine[i]=chaine[i];
            
    //       }
    // }


    printf("la chaine en majuscules : %s",chaine);
    
    return 0;
}