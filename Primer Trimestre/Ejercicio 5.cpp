#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 5: Realice un juego de adivinanzas matematicas que consiste de 5 preguntas
main () {
	int a,b,c,d,e;
	printf ("Bienvenido al juego matematico\n");
	printf ("Primer pregunta:\n");
	printf ("Cuanto es 7x9: ");
	scanf ("%d",&a);

	if (a==63) {
		printf ("Correcto\n");
    }
	else {
		printf ("Incorrecto, vuelva a empezar\n");
		return 0;
	}
	printf ("Segunda pregunta:\n");
	printf ("Cuanto es la mitad de 100: ");
	scanf ("%d",&b);
	if (b==50) {
		printf ("Correcto\n");
	}
	else {
		printf ("Incorrecto, vuelva a empezar\n");
		return 0;
	}
	printf ("Tercer pregunta:\n");
	printf ("Cual es la raiz cuadrada de 4: ");
	scanf ("%d",&c);
	if (c==2) {
		printf ("Correcto\n");
	}
	else {
		printf ("Incorrecto, vuelva a empezar\n");
		return 0;
	}
	printf ("Cuarta pregunta:\n");
	printf ("Cual es la suma de 43 y 47: ");
	scanf ("%d",&d);
	if (d==90) {
		printf ("Correcto\n");
	}
	else {
		printf ("Incorrecto, vuelva a empezar\n");
		return 0;
	}
	printf ("Quinta pregunta:\n");
	printf ("Cual es la mitad de 480: ");
	scanf ("%d",&e);
	if (e==240) {
		printf ("Correcto, ganaste\n");
	}
	else {
		printf ("Incorrecto, vuelva a empezar\n");
		return 0;
	}
	getch ();
	return 0;
}

