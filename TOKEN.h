#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED

#define esNumero isdigit
#define esLetra islower

typedef enum {
    INICIO, FIN, LEER, ESCRIBIR, ID, CONSTANTE, PARENT_IZQ, PARENT_DER, PUNTOYCOMA, COMPARADOR  , SUMA, RESTA, FDT
    } TOKEN;



#endif // TOKEN_H_INCLUDED
