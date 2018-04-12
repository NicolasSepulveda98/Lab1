// Iniciar programa//
// Identificar variables tipo int y float
// Pedir, leer y guardar datos//
// cerrar programa//

#include <stdio.h>

int main()
{
	float iva, propina;
	int amigos,total,valordecuenta,valorcadauno;
	printf ("Ingrese el valor de la cuenta: \n");
	scanf("%d",&valordecuenta);
	printf("Ingrese el numero de integrantes:");
	scanf("%d",&amigos);
	iva= 0.19*valordecuenta;
	propina=0.1*valordecuenta;
	total= iva+propina+valordecuenta;
	valorcadauno=total/amigos;
	printf("El valor total de la cuenta es: %d",total);
	printf("El valor que paga cada uno es: %d",valorcadauno);
	
	return 0;
}

