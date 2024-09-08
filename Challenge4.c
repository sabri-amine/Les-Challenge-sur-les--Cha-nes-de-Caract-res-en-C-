#include <stdio.h>
#include <string.h>
int main() {
    char Nom[]="amine";
    char Nom2[50];
    printf("Saisir votre nom :");
    scanf("\s",Nom2);

    if(strcmp(Nom,Nom2)==0){
        printf("Les deux chaine sont identique");
    }else{
        printf("Les deux chaine différentes.");
    }

    return 0;
}
