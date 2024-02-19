#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#define F 3
#define C 10

// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 16:Realice un programa en donde pueda ingresar las 3 
// cuotas del trimestre de 10 estudiantes.

main()
{
	int i,j;
	float promedio,vector[F][C];
	promedio=0;
	for(j=0;j<C;j++){
		printf("Alumno %d.",(j+1));
		for(i=0;i<F;i++){
			printf("\nIngrese la nota del trimestre %d: ",(i+1));
			scanf("%f",&vector[i][j]);
		}
		system("cls");
	}
	for(j=0;j<C;j++){
		for(i=0;i<F;i++){
			promedio=vector[i][j]+promedio;
		}
		promedio=promedio/C;
		printf("\nEl promedio del alumno %d es: %g",(j+1),promedio);
		promedio=0;
	}
}
