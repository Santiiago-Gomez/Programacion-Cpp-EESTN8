#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
//Ejercicio 8: Realice un programa en donde se pueda asociar
// una cantidad indefinida de resistencias en serie.
int main () {
	int numeros,i;
	float valor,rt;
	printf ("Cuantas resistencias deseas sumar?: ");
	scanf ("%d",&numeros);
	i=1;
	while (i<=numeros) {
		printf ("Valor de la resistencia %d:", i);
		scanf ("%g",&valor);
		rt=(rt+valor);
		i++;
	}
	printf ("El total es: %g Ohms", rt);
	getch ();
}
