#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Gostaria muito de trabalhar com vocês e fazer parte desta equipe.";

    int count = 0;

    for (int i = 0; i < strlen(str); i++){

        if (str[i] == 'a' || str[i] == 'A'){

            count++;

        }
    }


    if (count > 0){

        printf("A letra 'a' ou 'A' aparece %d vezes na string.\n", count);

    }
    else{

        printf("A letra 'a' ou 'A' nao foi encontrada na string.\n");

    }

    return 0;
}
