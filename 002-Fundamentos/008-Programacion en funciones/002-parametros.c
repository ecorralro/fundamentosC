#include <stdio.h>

int sumar(int num1, int num2){
    int numero1 = num1;
    int numero2 = num2;
    int suma = numero1 + numero2;

    return suma;
}
int main(int argc,char *argv[]){

   printf("La suma es: %i \n", sumar(8,6));
   printf("La suma es: %i \n", sumar(6,5));
    
    return 0;
}
