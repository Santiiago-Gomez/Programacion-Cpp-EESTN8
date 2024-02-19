#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 21:Una veterinaria necesita un programa en donde se puedan contabilizar
// la cantidad de animales segun la especie en la misma.
// Pueden ser cualquiera de la siguiente especie:
// Loro--Perro-Gato--Raton--Eskuilax
// El programa debe contabilizar la cantidad de veces que se ingresó la especie
// animal y al escribir la palabra salir debe indicar la cantidad de caracteres.

main(){
	int contaloro,contaperro,contagato,contaraton,contaeskuilax;
	contaloro=0, contaperro=0, contagato=0, contaraton=0, contaeskuilax=0;
	char animal[30];	
	while(1){
		system("cls");
		scanf("%s",&animal);
		if(strcmpi(animal,"loro")==0){
			cloro+=1;
		} 
		if(strcmpi(animal,"perro")==0){
			cperro+=1;
		}
		if(strcmpi(animal,"gato")==0){
			cgato+=1;
		}
		if(strcmpi(animal,"raton")==0){
			craton+=1;
		}
		if(strcmpi(animal,"eskuilax")==0){
			ceskuilax+=1;
		}
		if(strcmpi(animal,"salir")==0){
			break;
		}
	}
	system("cls");
	printf("Total de animales:\nLoros: %d\nPerros: %d\nGatos: %d\nRatones: %d\nEskuilax: %d",contaloro,contaperro,contagato,contaraton,contaeskuilax);
}
