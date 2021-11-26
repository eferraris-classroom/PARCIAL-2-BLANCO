//
// Created by Maxi Blanco on 26/11/2021.
//

#ifndef BASE_PROJECT_HELPER_H
#define BASE_PROJECT_HELPER_H
#define TAM1 30
#define TAM2 20

typedef struct registro {
    char nombre[TAM2];
    char apellido[TAM2];
    int dni;
} Registro;

void escritura (Registro[], FILE*);
void lectura (FILE*);
char * funcionCanonica(Registro *);
char* mayuscula (char * );

#endif //BASE_PROJECT_HELPER_H
