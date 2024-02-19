#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 2: Idem al 1, pero en paralelo.
main () {
	float a,b,rt;
	printf ("Programa para asociar 2 resistencias en paralelo\n");
	printf ("Ingrese el valor de la resistencia 1: ");
	scanf ("%g",&a);
	printf ("Ingrese el valor de la resistencia 2: ");
	scanf ("%g",&b);
	rt=(a*b) / (a+b);
	printf ("El resultado de la asociacion en serie es: %g",rt);
}
