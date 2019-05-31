#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[5] = "jose";
	char apellido[6] = "perez";
	int edad = 25;
	int dni = 36952084;

    printf("================================================\n");
    printf(" %-10s %-15s %-5s %-10s ", "Nombre", "Apellido", "Edad", "DNI"); //Tambien se pueden usar variables hardcodeadas como cabezal y usarlas normalmente
    printf("\n================================================");
    printf("\n %-10s %-15s %-5d %-10d ", nombre, apellido, edad, dni);
    return 0;
}
