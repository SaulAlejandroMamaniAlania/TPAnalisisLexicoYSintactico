#include <stdio.h>
//#include <ctype.h>

/*
int ungetc(char c, FILE *stream);
Esta función envía el carácter especificado por c (convertido a un unsigned char) en el stream de entrada apuntado por stream.
Los caracteres apilados serán retornados por lecturas posteriores en ese stream en orden inverso al que fueron apilados.
*/

int main( void )
{

   char c;

   char nombre[10]="datos.txt";
   FILE *archivoTxt;
   int i=0;

   archivoTxt = fopen( nombre, "r" );
   printf( "Archivo: %s -> ", nombre );
   if( archivoTxt )
      printf( "Existe (ABIERTO)\n\n" );
   else
   {
      printf( "Error (NO ABIERTO)\n\n" );
      return 1;
   }
    c=fgetc(archivoTxt);
    printf("%c",c);


    while(!feof(archivoTxt)&& c!='a')
    {
        i++;

        c=fgetc(archivoTxt);
        printf("%c",c);
    }

    printf("\n\n");

    ungetc( c, archivoTxt );

   printf( "\n i= %d  caracter %c", i, fgetc(archivoTxt) );


    printf("\n\n");
    fclose(archivoTxt);
   return 0;
}





