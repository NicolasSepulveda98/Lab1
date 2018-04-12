// Paso 1:Se abre el programa//
// Paso 2:Se identifican las variables de tipo float//
// Paso 3:Se pide, lee y guarda los datos pedidos//
// Paso 4:Se saca el porciento de cada uno dependiendo del valor//
// Paso 5:Se expresa lo pedido//
// Paso 6:Se cierra programa//
#include <stdio.h>

int main()
{
	float precio_traje,descuento_15,descuento_8;
	printf ("Ingrese el valor de su traje \n");
	scanf("%f",&precio_traje);
		if (precio_traje>250000){
		printf ("Su traje obtendra un descuento del 15 porciento");
		descuento_15= 0.85*precio_traje;
	printf ("El precio del traje con descuento es: %f",descuento_15); 
}
		else if (precio_traje<250000){
		printf ("Su traje obtendra un decuento de 8 porciento \n");
		descuento_8= 0.08*precio_traje;
	printf ("El precio del traje con descuento es: %f",descuento_8);
}
	
	return 0;
}


