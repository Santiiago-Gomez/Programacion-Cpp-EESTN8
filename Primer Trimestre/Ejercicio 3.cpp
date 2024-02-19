#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
// Gomez Santiago, 6to 2da
// Ejercicio 3: Realice un programa en donde se resuelva problemas de
// segundo grado devolviendo las 2 raíces, el vértice y el eje de simetría
// de la función cuadrática.
int main () {
	int a, b, c;
	float ejesime=0, division=0, cuadraticap=0, cuadraticas=0, vertice=0;
	printf ("Escriba el valor de A: ");
	scanf ("%d",&a);
	printf ("Escriba el valor de B: ");
	scanf ("%d",&b);
	printf ("Escriba el valor de C: ");
	scanf ("%d",&c);
	
	ejesime=(-(b/(2*a)));
	
	division=( (pow(b,2)-4*a*c) / (2*a));
	
	cuadraticap= ejesime+division;
	
	cuadraticas= (a*(pow(ejesime,2)))+(b*ejesime)+c;
	
	printf ("\nEl resultado es: %g", cuadraticap, cuadraticas);
	printf ("\nEl eje de simetria es: %g", ejesime);
	printf ("\nEl vertice es: %g", ejesime, vertice);
	getch ();
	return 0;
}
