#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Gomez Santiago, 6to 2da
// Ejercicio 11: realice un programa en donde pueda asociar una cantidad indefinida de
// resistencias, inductores o capacitores en serie o en paralelo.
int main () {
	int a,d,cantr,rs,rts,i,e,canti,inds,indts,cp,ctp,cantc,f;
	float rp,rtp,ip,itp,cs,cts;
	printf ("Lista de componentes para poder asociar:\n");
	printf ("1. Resistencias\n");
	printf ("2. Inductores\n");
	printf ("3. Capacitores\n");
	printf ("Indique el numero del componente el cual desea asociar: ");
	scanf ("%d",&a);
	switch (a){
		case 1:{
			printf ("Escriba 4 si desea hacer la asociacion en serie o 5 si desea hacerlo en paralelo: ");
			scanf ("%d",&d);
			switch (d) {
				case 4: {
					printf ("Indique la cantidad de componentes a usar: ");
					scanf ("%d",&cantr);
					for (i=1; i<=cantr; i++) {
						printf ("Ingrese el valor de la resistencia %d: ", i);
						scanf ("%d",&rs);
						rts= rts+rs;
					}
					printf ("\n La resistencia total es: %d ohms", rts);
					break;
				}
		        case 5: {
		        	printf ("Indique la cantidad de componentes a usar: ");
					scanf ("%d",&cantr);
					for (i=1; i<=cantr; i++) {
						printf ("Ingrese el valor de la resistencia %d: ", i);
						scanf ("%g",&rp);
						rtp= rtp+(float)(1/rp);
				}
				    rtp= 1/rtp;
				    printf ("\n La resistencia total es: %g ohms", rtp);
					break;
			}
		}
	}
	break; // fin switch a
} // fin case 1
    switch (a) {
    	case 2: {
    		printf ("Escriba 6 si desea hacer la asociacion en serie o 7 si desea hacerlo en paralelo: ");
			scanf ("%d",&e);
			switch (e) {
				case 6: {
					printf ("Indique la cantidad de componentes a usar: ");
					scanf ("%d",&canti);
					for (i=1; i<=canti; i++) {
						printf ("Ingrese el valor de la resistencia %d: ", i);
						scanf ("%d",&inds);
						indts= indts+inds;
				}
				printf ("\n La inductancia total es: %d mHy", indts);
					break;
			}
			case 7: {
				printf ("Indique la cantidad de componentes a usar: ");
					scanf ("%d",&canti);
					for (i=1; i<=canti; i++) {
						printf ("Ingrese el valor de la resistencia %d: ", i);
						scanf ("%g",&ip);
						itp= itp+(float)(1/ip);
			}
			itp= 1/itp;
			printf ("\n La inductancia total es %g mHy", itp);
			break;
		}
	}
}
        break; //fin switch a
    } //fin case 2
    switch (a) {
    	case 3: {
    		printf ("Escriba 8 si desea hacer la asociacion en serie o 9 si desea hacerlo en paralelo: ");
			scanf ("%d",&f);
			switch (f) {
				case 8: {
					printf ("Indique la cantidad de componentes a usar: ");
					scanf ("%d",&cantc);
					for (i=1; i<=cantc; i++) {
						printf ("Ingrese el valor de la resistencia %d: ", i);
						scanf ("%g",&cs);
						cts= cts+(float)(1/cs);
				}
				cts= 1/cts;
				printf ("\n La capacitancia total es %g cF", cts);
				break;
			}
			case 9: {
				printf ("Indique la cantidad de componentes a usar: ");
					scanf ("%d",&cantc);
					for (i=1; i<=cantc; i++) {
						printf ("Ingrese el valor de la resistencia %d: ", i);
						scanf ("%d",&cp);
						ctp= ctp+cp;
			}
			printf ("\n La capacitancia total es %d cF", ctp);
			break;
		}
	}
}
            break; //fin switch a
} // fin case 3
    getch ();
    return 0;
}
