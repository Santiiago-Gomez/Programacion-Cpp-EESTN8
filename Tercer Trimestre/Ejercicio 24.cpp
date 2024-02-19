#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
// Realice un programa que halle el mayor de una serie indefinida de numeros
// utilizando funciones en la cual solamente pueda enviar una variable.
int funcion (int);
int main () {
	int cant, total, numeros;
	int i;
	printf ("Elija la cantidad de numeros que desea ingresar: ");
	scanf ("%d",&cant);
	for (i=0; i<cant; i++) {
		printf ("Pone el valor del valor numero %d: ", i+1);
		scanf ("%d",&numeros);
		total= funcion (numeros);
		printf ("El numero mayor es: %d\n", total);
	}
	getch ();
	return 0;
}
int funcion (int x) {
	static int mayor;
	if (x>mayor){
	mayor=x;
}
	return mayor;
}
