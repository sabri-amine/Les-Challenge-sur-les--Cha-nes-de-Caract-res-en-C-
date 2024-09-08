#include <stdio.h>
#include <string.h>
int main() {
    char Nom[50];

    printf("Entrer un chaine caracter :");
    scanf("%s",&Nom);

    strupr(Nom);
    printf("%s",Nom);


    return 0;
}
