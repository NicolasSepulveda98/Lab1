// paso 1:Inciar programa
// paso 2:Identificar variables tipo int, char //
// paso 3:Pedir, leer y guardar los datos pedidos//
// paso 4:Los datos se iniciaron con while//
// paso 5:Se aumentaron los votos con el condicionante if, estableciendo votos nulos//
// paso 6:Se saco un valor total de votos//
// paso 7:Se estable y felicita quien gana//
// paso 8:Se establece porcentaje de cada candidato//
// paso 9:Se cierra programa//

#include <stdio.h>

int main()
{
	printf ("Elecciones para presidente del centro general de alumnos \n");
	int candidato_1, candidato_2, candidato_3,nulo, porcentaje_1, porcentaje_2, porcentaje_3, totaldevotos;
	char votos, tecla='v';
	candidato_1= 0;
	candidato_2= 0;
	candidato_3= 0;
	nulo= 0;
while (tecla !='f'){
	printf("Si vota por candidato 1, presione 1 \n");
	printf("Si vota por candidato 2, presione 2 \n");
	printf("Si vota por candidato 3, presione 3 \n");
	printf("Ingrese cualquier otra letra, menos f, para votar nulo \n");
	scanf("%c",&votos);
	if (votos== '1'){
		candidato_1++;
	}

	if (votos== '2'){
		candidato_2++;
	}

	if (votos== '3'){
		candidato_3++;
	}
	if (votos!='1' && '2' && '3'){
		nulo++;
	}
	while (getchar()!='\n');
	printf("Si no desea continuar votando, presione f \n");
	scanf("%c", &tecla);
}
	totaldevotos= candidato_1+candidato_2+candidato_3+nulo;
	printf ("La cantidad total de votos del candidato 1 es: %d\n",candidato_1);
	printf ("La cantidad total de votos del candidato 2 es: %d\n",candidato_2);
	printf ("La cantidad total de votos del candidato 3 es: %d\n",candidato_3);
	printf ("La cantidad de numeros nulos es: %d\n",nulo);
		if ((candidato_1 > candidato_2) && (candidato_1 > candidato_3)){
	printf ("El candidato 1 gano\n"); 
		}
		else if ((candidato_2 > candidato_1) && (candidato_2 > candidato_3)){
	printf ("El candidato 2 gano\n");
		}
		else if ((candidato_3 > candidato_1) && (candidato_3 > candidato_2)){
	printf ("El candidato 3 gano\n");
		}
	porcentaje_1= (candidato_1/totaldevotos)*100;
	printf("El porcentaje de el candidato 1 es: %d",porcentaje_1);
	porcentaje_2= (candidato_2/totaldevotos)*100;
	printf("El porcentaje de el candidato 2 es: %d",porcentaje_2);
	porcentaje_3= (candidato_3/totaldevotos)*100;
	printf("El porcentaje de el candidato 3 es: %d", porcentaje_3);
	
	
	return 0;
}
		
	
	
	
			
	
