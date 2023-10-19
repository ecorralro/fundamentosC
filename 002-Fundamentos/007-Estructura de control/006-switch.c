#include <stdio.h>
int main(int argc,char *argv[]){

    int diadelasemana = 9;
    switch (diadelasemana)
    {
    case 1:
        printf("hoy es lunes");
        break;
    case 2:
        printf("hoy es martes");
        break;
    case 3:
        printf("hoy es miércoles");
        break;
    case 4:
        printf("hoy es jueves");
        break;
    case 5:
        printf("hoy es viernes");
        break;
    case 6:
        printf("hoy es sábado");
        break;
    case 7:
        printf("hoy es domingo");
        break;
    
    default:
        printf("te has equivocado");
        break;
    }
    
    return 0;
}