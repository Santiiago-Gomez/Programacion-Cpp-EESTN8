#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
// Gomez Santiago, Abrego Mauricio 6to 2da
// Idem 30 pero con 10 personas.
struct afip { int dni;
              char nombre[30];
              float altura;
              int edad;
          };

int main () {
	int i;
	struct afip a, j[10];
	for (i=0; i<10; i++) {
	printf("ingrese dni %d: ", i+1);
	scanf("%d",&j[i].dni);
}
system ("cls");
for (i=0; i<10; i++) {
    printf ("ingrese nombre %d: ", i+1);
	scanf ("%s",&j[i].nombre);
    fflush(stdin);
}
system ("cls");
for (i=0; i<10; i++) {
	printf ("ingrese altura %d: ", i+1);
	scanf ("%g",&j[i].altura);
}
system ("cls");
for (i=0; i<10; i++) {
	printf("ingrese edad %d: ", i+1);
	scanf("%d",&j[i].edad);
}
system ("cls");
for (i=0; i<10; i++) {
	printf ("el dni numero %d es: %d \n", i+1, j[i].dni);

	printf ("el nombre numero %d es: %s \n", i+1, j[i].nombre);

	printf ("la altura numero %d es: %g \n", i+1, j[i].altura);

	printf ("la edad numero %d es: %d \n", i+1, j[i].edad);
}
	getch ();
	return 0;
}
