#include <stdio.h>

/*
int fgetc(FILE *stream);
La función fgetc retorna el carácter siguiente desde el stream de entrada.
Si el stream está en el final de fichero, el indicador del final de fichero para el stream es activado y fgetc retorna EOF.
Si ocurre un error de lectura, el indicador de error para el stream es activado y fgetc retorna EOF.
*/

int main()
{
   char nombre[10]="datos.txt";
   FILE *archivoTxt;
   int i;

   archivoTxt = fopen( nombre, "r" );
   printf( "Archivo: %s -> ", nombre );
   if( archivoTxt!=NULL )
      printf( "Existe (ABIERTO)\n" );
   else
   {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "\nLos 18 primeros caracteres del texto del archivo: %s\n\n", nombre );

   for( i=1; i<=18; i++)
        printf( "%c", fgetc(archivoTxt) );

   printf("\n\n");
   fclose(archivoTxt);


   return 0;
}
