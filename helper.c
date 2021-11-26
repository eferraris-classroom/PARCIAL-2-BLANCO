//
// Created by Maxi Blanco on 26/11/2021.
//

#include "helper.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void escritura(Persona p[TAM1],FILE * archivo){

    archivo = fopen("personas.txt","wb");
    if (archivo==NULL){
        printf("Error, no se pudo escribir");
        exit(1);
    }
    fwrite(p, sizeof(Persona), TAM1, archivo);
    fclose(archivo);
}

void lectura(FILE *archivo){
    Persona impresion[TAM1];
    archivo = fopen("personas.dat","rb");
    if (archivo==NULL){
        printf("Error. No se puede leer el archivo");
        exit(1);
    }
    fread(impresion, sizeof(Persona), TAM1, archivo);

    for (int i = 0; i<TAM1; i++){
        printf("Persona %d:\n", i+1);
        printf("Nombre: %s\nApellido: %s\nTel: %d\n\n", impresion[i].nombre, impresion[i].apellido, impresion[i].celular);
    }
    fclose(archivo);
}

char * funcionCanonica (Registro * p)
{
    char *llave = (char*)malloc(sizeof(char)*(strlen(p->nombre)+strlen(p->apellido)+1));
    strcat(llave,mayuscula(p->nombre));
    strcat(llave, "_");
    strcat(llave,mayuscula(p->apellido));

    puts(llave);
    return llave;
}

char * mayuscula(char* palabra){
    char *copia = (char*)malloc(sizeof(char)*strlen(palabra));
    for (int i =0; i<strlen(palabra);i++){
        copia[i]=toupper(palabra[i]);
    }
    return copia;
}