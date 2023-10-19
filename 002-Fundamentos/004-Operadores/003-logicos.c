#include <stdio.h>
int main(int argc,char *argv[]){
    printf("dime si es cierto: %i \n",(5>3 && 5>4 && 5>1));//true:1
    printf("dime si es cierto: %i \n",(5>8 && 5>4 && 5>1));//false:0

    printf("dime si es cierto: %i \n",(5>3 || 5>4 || 5>1));//true:1
    printf("dime si es cierto: %i \n",(5>8 || 5>4 || 5>1));//true:1 con el 'or' con uno que sea cierto vale

    return 0;
}