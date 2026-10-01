#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definicion de la estructura para los enlaces de microondas
typedef struct {
	char NombreEnlace[50];
	float FrecuenciaGHz;
	float PotenciaTx;
} Enlace;

int main() {
	int opcion;
	
	// // Aquí viene lo bueno joven
	
	do {
		printf("\n========================================\n");
		printf("    ADMINISTRACION DE ENLACES DE RED    \n");
		printf("========================================\n");
		printf("1. Ingresar nuevos enlaces\n");
		printf("2. Buscar enlaces por potencia cercana\n");
		printf("3. Salir\n");
		printf("Seleccione una opcion: ");
		
		if (scanf("%d", &opcion) != 1) {
			printf("Error: Ingrese un numero valido.\n");
			while(getchar() != '\n'); // Limpiar buffer
			continue;
		}
		
		switch(opcion) {
		case 1:
			printf("\n[Modo de carga: En desarrollo...]\n");
			break;
		case 2:
			printf("\n[Modo de busqueda: En desarrollo...]\n");
			break;
		case 3:
			printf("\nSaliendo del sistema. ¡Hasta luego!\n");
			break;
		default:
			printf("\nOpcion invalida. Intente de nuevo.\n");
		}
	} while(opcion != 3);
	
	return 0;
}
