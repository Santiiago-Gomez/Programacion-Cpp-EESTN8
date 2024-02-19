#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
//Ingresar 2 numeros, multiplicarlos y devolverlos.
float multiplicacion (int,int);
int main () {
	int total;
	int j, k;
	printf ("ingrese el valor numero 1: ");
	scanf ("%d",&j);
	printf ("ingrese el valor numero 2: ");
	scanf ("%d",&k);
		total= multiplicacion (j,k);
		printf ("El resultado es: %d\n", total);
	getch ();
	return 0;
}
float multiplicacion (int r, int l) {
	static float multi;
	multi= r*l;
	return multi;
}
