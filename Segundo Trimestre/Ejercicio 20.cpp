#include <stdio.h>
#include <windows.h>
#include <conio.h>
// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 20:Se ingresan las notas trimestrales de una cantidad indefinida de estudiantes y
// se devuelva el numero de estudiante con sus 3 notas, el promedio de las mismas con 
// todos los estudiantes ordenados de menor a mayor segun promedio.
main()
{
	int i=-1,a=0;
	int j,k,l;			
	float vec[1000][4],aux;
	while(a==0){
		i++;
		printf("Alumno %d:\n",i);
		printf("Nota primer trimestre (0=fin): ");
		scanf("%f",&vec[i][0]);
		if(vec[i][0]==0){
			i--;
			a=1;
			system("cls");
		} else {
			printf("Nota segundo trimestre: ");
			scanf("%f",&vec[i][1]);
			printf("Nota tercer trimestre: ");
			scanf("%f",&vec[i][2]);
			vec[i][3]=(vec[i][0]+vec[i][1]+vec[i][2])/3;
			system("cls");
		}	
	}
	for(j=0;j<i-1;j++){
		for(k=0;k<i-1;k++){
			for(l=0;l<4;l++){
				if(vec[k][l]>vec[k+1][l]){
					aux=vec[k][l];
					vec[k][l]=vec[k+1][l];
					vec[k+1][l]=aux;
				}	
			}
		}
	}
	for(j=0;j<i;j++){
		printf("Alumno %d.\nPrimer trimestre: %g.\nSegundo trimestre: %g.\nTercer trimestre: %g.\nPromedio final: %g.\n\n",j+1,vec[j][0],vec[j][1],vec[j][2],vec[j][3]);
	}
}
