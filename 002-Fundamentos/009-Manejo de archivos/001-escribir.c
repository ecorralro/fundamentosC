int main(int argc,char *argv[]){

    FILE *archivo;

    archivo = fopen("prueba.txt", "w");
    fprintf(archivo, "Esto es un archivo de prueba \n");
    fclose(archivo);
    
    return 0;
}
