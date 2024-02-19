#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 6: Realice un programa en donde la persona pueda asociar
// 2 resistencias, inductores o capcitores en paralelo.
int main () {
	int a;
	float r1,r2,rt,i1,i2,it,c1,c2,ct;
	printf ("Calculadora para asociar en paralelo\n");
	printf ("1. Resistencias\n");
	printf ("2. Inductores\n");
	printf ("3. Capacitores\n");
	printf ("Por favor elija que quiere asociar: ");
	scanf ("%d",&a);
	switch (a) {
		case 1:printf ("Ingrese r1: ");
		       scanf ("%g",&r1);
		       printf ("Ingrese r2: ");
		       scanf ("%g",&r2);
		       rt=(r1*r2) / (r1+r2);
		       printf ("El resultado es: %g Ohm", rt);
		       break;
		case 2:printf ("Ingrese i1: ");
		       scanf ("%g",&i1);
		       printf ("Ingrese i2: ");
		       scanf ("%g",&i2);
		       it=(i1+i2);
		       printf ("El resultado es: %g mHy", it);
		       break;
		case 3:printf ("Ingrese c1: ");
		       scanf ("%g",&c1);
		       printf ("Ingrese c2: ");
		       scanf ("%g",&c2);
		       ct=(c1+c2);
		       printf ("El resultado es: %g cF", ct);
		       break;
		default:printf ("\nPor favor elija del 1 al 3");
		       break;
	}
}
