#include <stdio.h>
#include <ctype.h>

/*
int isalnum(int c);     ctype.h
Comprueba sin un car�cter es alfanum�rico.
*/

int main()
{
   char cadena[] = ";0sR(h&R1/";
   int i;

   for(i = 0; cadena[i]; i++)
      printf("%c   %d\n", cadena[i], isalnum(cadena[i]));

   return 0;
}
