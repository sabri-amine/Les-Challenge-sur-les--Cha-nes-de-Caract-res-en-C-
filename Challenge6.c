#include <stdio.h>
#include <string.h>
int main() {
    char Nom[]="amine";

    char s;
    int count= 0;

    printf("entrer un charcter :");
    scanf("%c",&s);

    for(int i=0;i<strlen(Nom);i++){
        if(Nom[i]==s){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
