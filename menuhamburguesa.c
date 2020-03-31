#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcion;
	printf("HAMBURGUESAS CARLS jr TECATE\n\n");
	printf("ELIGA UN COMBO DEL MENU\n\n");
	printf("1-THE BIG CARL\n");
	printf("2-FAMOUS STAR WITH CHEESE\n");
	printf("3-SUPER STAR WITH CHEESE\n");
	printf("4-WERSTERN BACON CHEESE BURGER\n");
	printf("5-DOUBLE WERSTERN BACON CHEESE BURGER\n");
	printf("6-SINGLE TERIYAKI BURGER\n");
	printf("7-JALAPENIO BURGER\n\n");
	printf("ELIGA UNA OPCION\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1: printf("HA ELEGIDO THE BIG CARL PAGAR $200 PESOS ");
		break;
		case 2: printf("HA ELEGIDO FAMOUS STAR WITH CHEESE PAGAR $210 PESOS");
		break;
		case 3: printf("HA ELEGIDO SUPER STAR WITH CHEESE PAGAR $215 PESOS ");
		break;
		case 4: printf("HA ELEGIDO WERSTERN BACON CHEESE BURGER PAGAR $220 PESOS ");
		break;
		case 5: printf("HA ELEGIDO DOUBLE WERSTERN BACON CHEESE BURGER PAGAR $220 PESOS ");
		break;
		case 6: printf("HA ELEGIDO SINGLE TERIYAKI BURGER PAGAR $190 PESOS ");
		break;
		case 7: printf("HA ELEGIDO JALAPENIO BURGER PAGAR $190 PESOS ");
		break;
		default:printf("ESA OPCION ES INCORRECTA");
	}
	
	return 0;
}
