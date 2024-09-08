#include <stdio.h>
#include <string.h>

int main() {
    char Nom[1000];;

    printf("Entrer Votre Nom :");
    scanf("%s",Nom);
    int i=0;

    while(Nom[i]=='\0'){
        i++;
    }
    printf("%d",i);
    return 0;
}
