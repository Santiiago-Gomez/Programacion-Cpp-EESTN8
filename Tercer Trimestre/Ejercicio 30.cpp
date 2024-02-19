#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
// Crear una estructura que almacene DNI, nombre, altura y edad de un sujeto. Almacenar
// todas esas caracteristicas de un sujeto en pantlla.
struct afip { int dni;
              char nombre[1];
              float altura;
              int edad;
          };
          
int main () {
	struct afip a;
	printf("ingrese dni: ");
	scanf("%d",&a.dni);
    printf ("ingrese nombre: ");
	scanf ("%s",&a.nombre);
	fflush(stdin);
	printf ("ingrese altura: ");
	scanf ("%f",&a.altura);
	printf("ingrese edad: ");
	scanf("%d",&a.edad);
	printf ("el dni es: %d \n", a.dni);
	printf ("el nombre es: %s \n", a.nombre);
	printf ("la altura es: %f \n", a.altura);
	printf ("la edad es: %d \n", a.edad);
	getch ();
	return 0;
}
