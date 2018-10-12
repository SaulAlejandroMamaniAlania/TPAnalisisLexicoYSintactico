
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#include "TOKEN.h"


char entrada[50]={'\0'};


int esPalabraReservada(char entrada[]) {
        return (strcmp(entrada,"inicio") == 0 || strcmp(entrada,"fin") == 0 || strcmp(entrada,"leer") == 0 || strcmp(entrada,"escribir") == 0);
    }


    int esOperador(char caracter) {
        return (caracter == '+' || caracter == '-');
    }

    int esCaracterPuntuacion(char caracter) {
        return (caracter == '(' || caracter == ')' || caracter == ';');
    }
TOKEN scanear(){

        char caracter;
        if(esPalabraReservada(entrada)) {
                        if(strcmp(entrada,"inicio") == 0){
                          return INICIO;
                    }
                    else {
                        if(strcmp(entrada,"leer") == 0) {
                            return LEER;
                        }
                        else {
                            if(strcmp(entrada,"escribir") == 0){
                            return ESCRIBIR;
                        }
                            else{
                            return FIN;
                        }
                        }
                    }
                }


            if(esOperador(caracter)) {
                if(caracter == '+') {
                return SUMA;
            }
             if(caracter == '-') {
                return RESTA;
            }
            }

            if(caracter == '(') {
                return PARENT_IZQ;
            }

            if(caracter == ')') {
                return PARENT_DER;
            }

            if(caracter == ';') {
                return PUNTOYCOMA;
            }

            if(caracter == '==') {
                return COMPARADOR;
            }


}

int main()
{
    printf("Analisis Lexico!\n");

       return 0;
}
