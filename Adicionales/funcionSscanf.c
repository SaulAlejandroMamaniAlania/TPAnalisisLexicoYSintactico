#include <stdio.h>

/*
La función sscanf() es similar a la función scanf()
la diferencia es que en lugar de tomar los datos de la entrada, los toma del propio programa.
*/

int main()
{


   char s[] = "31298 87.375 568"; /* inicializa el arreglo s */
   int x;
   float y;
   sscanf( s, "%d%f", &x, &y );
   printf("Los valores almacenados en el arreglo de caracteres s son:\nentero: %d \nflotante: %f\n\n",x,y);

   return 0;
}
