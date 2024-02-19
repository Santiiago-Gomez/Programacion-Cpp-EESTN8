#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 10: realice un programa en donde se seleccione la cantidad 
// de alumnos en un curso y luego se ingrese la nota final de cada alumno
// y devuelva el promedio general.
int main () {
	int a,i,b,pr=0;
	printf ("Ingrese la cantidad de alumnos: ");
	scanf ("%d",&a);
	for (i=1; i<=a; i++) {
		printf ("Ingrese la nota final del alumno %d:", i);
		scanf ("%d",&b);
		pr=(pr+b);
	}
	printf ("El promedio total es: %d", pr/a);
	getch ();
	return 0;
}
