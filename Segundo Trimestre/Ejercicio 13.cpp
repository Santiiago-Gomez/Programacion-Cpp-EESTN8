#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 10

// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 13:Idem 12 pero que además muestre el numero maximo y minimo.

int main () {
	int vec [10], i, mayor, menor;
	printf ("Ingrese 10 numeros enteros: ");
	for (i=0; i<N; i++) {
		scanf ("%d",&vec[i]);
	}
	mayor= 0;
	menor= 1000;
	for (i=0; i<N; i++) {
		if (vec [i]> mayor) {
			mayor= vec [i];
		}
		if (vec [i]< menor) {
			menor= vec [i];
		}
	}
	printf ("El mayor es: %d\n", mayor);
	printf ("El menor es: %d", menor);
}
