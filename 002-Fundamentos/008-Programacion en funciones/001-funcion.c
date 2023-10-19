#include <stdio.h>

int sumar(){
    int numero1 = 5;
    int numero2 = 4;
    int suma = numero1 + numero2;

    return suma;
}
int main(int argc,char *argv[]){

   printf("La suma es: %i \n", sumar());
    
    return 0;
}

