#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    
    char nombre[] = "Eugenio";
    char apellidos[] = "Corral Rodriguez";

    printf("mi nombre completo es: %s %s",nombre, apellidos);// prueba hecha por mi (funciona)

    /*strcat(nombre,apellidos);
    printf("Mi nombre completo: %s",nombre); no me compila */

    return 0;
}