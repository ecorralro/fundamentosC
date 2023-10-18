#include <stdio.h>
int main(int argc,char *argv[]){
    printf("elige un numero entre 0 y 9");
    char numero = getchar();
    printf("el numero seleccionado es: %c \n",numero);
    return 0;
}