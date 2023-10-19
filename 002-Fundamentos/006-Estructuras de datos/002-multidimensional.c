#include <stdio.h>
int main(int argc,char *argv[]){
    
    char *agenda[5][5]; //es un 'arreglo' para poder tener diferentes tipos de datos

    agenda[0][0] = "Eugenio";
    agenda[0][1] = "Corral";
    agenda[0][2] = "12345";
    agenda[0][3] = "ecorral@corral.com";

    agenda[1][0] = "Cristina";
    agenda[1][1] = "Grau";
    agenda[1][2] = "356356";
    agenda[1][3] = "crisgrau@grau.com";

    printf("El apellido del segundo registro es: %s \n",agenda[1][1]);

    return 0;
}