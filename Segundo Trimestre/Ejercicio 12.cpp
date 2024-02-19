#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 10

//Gomez Santiago, Cicero Antonella 6to 2da
// Ej 12:Realice un programa en donde se almacenen en un vector 10 valores y luego se los imprima
// en pantalla.

int main () {
	int vec [10], i;
	printf ("Ejercicio de 10 vectores:\n");
	for (i=0; i<N; i++) {
		scanf ("%d",&vec[i]);
}
    for (i=0; i<N; i++) {
        printf ("\n%d", vec[i]);
}
getch ();
return 0;
}
