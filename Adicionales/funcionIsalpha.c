#include <stdio.h>
#include <ctype.h>
/*
int isalpha(int c);    ctype.h
Comprueba sin un carácter es alfabético.
verifica si el entero c pertenece al rango de letras (A a Z o a a z).
El valor de retorno será no nulo si c es una letra y cero en caso contrario.
*/
int main()
{
   char cadena[] = ";0sR(h&R1/";
   int i;

   for(i = 0; cadena[i]; i++)
      printf("%c  %d\n", cadena[i], isalpha(cadena[i]));

   return 0;
}
