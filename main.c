#include <stdio.h>
#include <stdlib.h>
#include "helper.h"
#define TAM1 30
#define TAM2 20

//3. Defina una función que realice una búsqueda secuencial en todos los registros de un archivo, hasta encontrar un
// registro con una llave dada. Para eso necesitará de una función canónica de la forma char * funcionCanonica(Registro *).
// Suponga que el archivo contiene información asociada a clientes de una empresa (DNI, nombre, apellido, etc.).

int main() {

    Registro personas[TAM1] = {
            {"Ramon", "Ramirez", 1523452345},
            {"Esteban", "Estevez", 1545611234},
            {"Fernando", "Fernandez", 1578944534},
            {"Matias", "Mateo", 1545664444},
            {"Ramiro", "Renato", 1112311231},
            {"Carolina", "Herrera", 1132133213},
            {"Pepe", "Le Poo", 1523452345},
            {"Esteba", "Estevez", 1545611234},
            {"Fernand", "Fernandez", 1578944534},
            {"Matia", "Mateo", 1545664444},
            {"Ramir", "Renato", 1112311231},
            {"Carolin", "Herrera", 1132133213},
            {"Ramon", "Ramire", 1523452345},
            {"Esteban", "Esteve", 1545611234},
            {"Fernando", "Fernande", 1578944534},
            {"Matias", "Mate", 1545664444},
            {"Ramiro", "Renat", 1112311231},
            {"Carolina", "Herrer", 1132133213},
            {"Raon", "Ramirez", 1523452345},
            {"Eseban", "Estevez", 1545611234},
            {"Fenando", "Fernandez", 1578944534},
            {"Mtias", "Mateo", 1545664444},
            {"Rairo", "Renato", 1112311231},
            {"Caolina", "Herrera", 1132133213},
            {"Ramon", "Ramiez", 1523452345},
            {"Esteban", "Esevez", 1545611234},
            {"Fernando", "Fenandez", 1578944534},
            {"Matias", "Maeo", 1545664444},
            {"Ramiro", "Rnato", 1112311231},
            {"Carolina", "Herera", 1132133213}
    };

    FILE *fPersonas;
    escritura(personas, fPersonas);
    lectura (fPersonas);

    Registro *buscado = (Registro*)malloc(sizeof(Registro)*1);
    printf("\nEscriba el Nombre de la persona buscada:\t");
    fflush(stdin);
    fgets(buscado->nombre, TAM2,stdin);

    printf("\nEscriba el Apellido de la persona buscada:\t");
    fflush(stdin);
    fgets(buscado->apellido, TAM2,stdin);

    char * llave = funcionCanonica(buscado);

    return 0;
}