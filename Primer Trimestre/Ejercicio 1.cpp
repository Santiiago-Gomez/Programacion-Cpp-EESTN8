#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 1: Realice un programa donde se ingrese 2 resistencias
// y se devuelva la asociación en serie.
main () {
	int a,b,rt;
	printf ("Programa para asociar 2 resistencias en serie\n");
	printf ("Ingrese el valor de la resistencia 1: ");
	scanf ("%d",&a);
	printf ("Ingrese el valor de la resistencia 2: ");
	scanf ("%d",&b);
	rt=a+b;
	printf ("El resultado de la asociacion en serie es: %d",rt);
}
