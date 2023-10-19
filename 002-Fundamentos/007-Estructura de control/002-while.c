#include <stdio.h>
int main(int argc,char *argv[]){

    int dia = 1;

    while(dia<31){ //bucle infinito ya que siempre entrará mientras sea menor de 31 
                    //lo arreglamos incrementando dia++
    
        printf("Esto son los dias del mes: %i \n",dia);
        dia++;
    }


    return 0;
}