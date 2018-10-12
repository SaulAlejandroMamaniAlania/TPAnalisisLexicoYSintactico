#include <stdio.h>
#include <ctype.h>

/*
int isspace(int c);    ctype.h
Comprueba sin un car·cter es de tipo espacio.
verifica si el entero c pertenece al grupo de caracteres de espacio, ' ', tab, retorno de carro, nueva lÌnea, tabulador vertical o salto de p·gina
El valor de retorno ser· no nulo si c es un car·cter de tipo espacio
*/

int main()
{
   char cadena[] = ";0 Òs·R\n(h &~?\177R\t€ 1/";
   int i;

   for(i = 0; cadena[i]; i++)
      printf("%c  %d\n", cadena[i], isspace(cadena[i]));

   return 0;
}

