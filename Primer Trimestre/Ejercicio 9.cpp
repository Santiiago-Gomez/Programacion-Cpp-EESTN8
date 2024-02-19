#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 9: Idem 8 en paralelo.
main () {
	int numeros,i;
	float valor,rt;
	printf ("Cuantas resistencias deseas asociar?: ");
	scanf ("%d",&numeros);
	i=1;
	while (i<=numeros) {
		printf ("Valor de la resistencia %d:", i);
		scanf ("%g",&valor);
		rt= rt+(float)(1/valor);
		i++;
	}
	rt= 1/rt;
	printf ("El total es: %g Ohms", rt);
	getch ();
}
