#include <stdio.h>

//https://github.com/LeonCarrizo403461/tp5-1R1
//https://github.com/LeonCarrizo403461/tp3-1R1

int main(int argc, char *argv[]) {
	
	int e, n, alta = 0, baja = 100;
	float prom = 0;
	
	printf("Ingrese la cantidad de estudiantes: ");
	scanf("%d", &e);
	
	while (e < 1){
		printf("ERROR. Ingrese una cantidad mayor que cero: ");
		scanf("%d", &e);
	}
	
	for (int i = e; i != 0; i--){
		printf("Ingrese la nota del estudiante: ");
		scanf("%d", &n);
		
		while (n < 0 || n > 100){
			printf("ERROR. Ingrese una nota entre 0 y 100: ");
			scanf("%d", &n);
		}
		if (n > alta){
			alta = n;
		}
		if (n < baja){
			baja = n;
		}
		prom = prom + n;
	}
	
	prom = (float) prom / e;
	
	printf("El promedio es: %.2f \n", prom);
	printf("La nota más alta es: %d \n", alta);
	printf("La nota más baja es: %d \n", baja);
	
	return 0;
}