#ifndef COMPARACIONES_H_INCLUDED
#define COMPARACIONES_H_INCLUDED
////#############################################################################
// ARCHIVO : validaciones.h
// AUTOR : Carlos Gabriel Gomez - Jose Adrian Criscione
// FECHA DE CREACION : 16/06/2017.
// ULTIMA ACTUALIZACION: 30/06/2017.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP 7 / Windows 10 .
// IDE : Code::Blocks - 8.02 / 1 6
// COMPILADOR : GNU GCC Compile r (Linux) / MinGW Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// aquí va una descripción general de la libreria
//
////////////////////// ///////////////////////////////////////////////////////////
using namespace std;

//=============================================== ==============================
// FUNCION : com_let_fac
// ACCION : esta funcion compara las coordenas ingresadas por el usuario.
// PARAMETROS:  casillero tablero[4][4]
//             int f1: fila actual
//             int c1: columna actual
//             int f2: fila anterior
//             int c2: columna anterior
//             int aciertos: parametro por puntero
//             int intento: parametros por puntero
// DEVUELVE : bool -- > devuelde True si la posicion se repite.
// -----------------------------------------------------------------------------

void com_let_fac(casillero tablero[4][4],int f1,int c1,int f2,int c2,int *aciertos,int *intento)
{
    /*f=fila recien ingresada*//*c=columna recien ingresada*/
    /*fa=fila anterior *//*ca=columna anterior */
    int com;/*declaro una variable entera*/
    com=strcmp(tablero[f1][c1].letra,tablero[f2][c2].letra);
    /*almaceno en la variable com el valor de strcmp*/
    sys::cls();
    mos_fac(tablero);/*muestra los dos casilleros marcados por dos segundos*/
    if(com==0)/*strcmp devuelve un 0 si las letras son iguales*/
    {
        acertaste();/*muestra por pantalla el cartel acertaste*/
        tablero[f1][c1].acerto=true;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=true;/*muestra la letra del casillero*/
        *aciertos+=1;/*incremento el valor de la variable acierto*/
        *intento-=1;/*se descuenta un intento cada vez que tira dos veces*/
    }
    else
    {
        fallaste();/*muestra por pantalla el cartel fallaste*/
        tablero[f1][c1].acerto=false;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=false;/*muestra la letra del casillero*/
        *intento-=1;/*se descuenta un intento cada vez que tira dos veces*/
    }

}
//=============================================== ==============================
// FUNCION : com_let_mod
// ACCION : esta funcion compara las coordenas ingresadas por el usuario.
// PARAMETROS:  casillero tablero[6][6]
//             int f1: fila actual
//             int c1: columna actual
//             int f2: fila anterior
//             int c2: columna anterior
//             int aciertos: parametro por puntero
//             int intento: parametros por puntero
// DEVUELVE : bool -- > devuelde True si la posicion se repite.
// -----------------------------------------------------------------------------

void com_let_mod(casillero tablero[6][6],int f1,int c1,int f2,int c2,int *aciertos, int *intento)
{
    /*f=fila recien ingresada*//*c=columna recien ingresada*/
    /*fa=fila anterior *//*ca=columna anterior */
    int com;/*declaro una variable entera*/
    mos_mod(tablero);/*muestra los dos casilleros marcados por dos segundos*/
    com=strcmp(tablero[f1][c1].letra,tablero[f2][c2].letra);
    /*almaceno en la variable com el valor de strcmp*/
    if(com==0)/*strcmp devuelve un 0 si las letras son iguales*/
    {
        acertaste();
        tablero[f1][c1].acerto=true;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=true;/*muestra la letra del casillero*/
        *aciertos+=1;/*incremento el valor de la variabñe acierto*/
        *intento-=1;/*se descuenta un intento cada vez que tira dos veces*/
    }
    else
    {
        fallaste();/*muestra por pantalla el cartel fallaste*/
        tablero[f1][c1].acerto=false;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=false;/*muestra la letra del casillero*/
        *intento-=1;/*se descuenta un intento cada vez que tira dos veces*/
    }
}

//=============================================== ==============================
// FUNCION : com_let_dif
// ACCION : esta funcion compara las coordenas ingresadas por el usuario.
// PARAMETROS:  casillero tablero[4][4]
//             int f1: fila actual
//             int c1: columna actual
//             int f2: fila anterior
//             int c2: columna anterior
//             int aciertos: parametro por puntero
//             int intento: parametros por puntero
// DEVUELVE : bool -- > devuelde True si la posicion se repite.
// -----------------------------------------------------------------------------

void com_let_dif(casillero tablero[8][8],int f1,int c1,int f2,int c2,int *aciertos,int *intento)
{
    /*f=fila recien ingresada*//*c=columna recien ingresada*/
    /*fa=fila anterior *//*ca=columna anterior */
    int com;/*declaro una variable entera*/

    com=strcmp(tablero[f1][c1].letra,tablero[f2][c2].letra);
    /*almaceno en la variable com el valor de strcmp*/
    mos_dif(tablero);
    if(com==0)/*strcmp devuelve un 0 si las letras son iguales*/
    {
        acertaste();
        tablero[f1][c1].acerto=true;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=true;/*muestra la letra del casillero*/
        *aciertos+=1;/*incremento el valor de la variabñe acierto*/
        *intento-=1;/*se descuenta un intento cada vez que tira dos veces*/
    }
    else
    {
        fallaste();/*muestra por pantalla el cartel fallaste*/
        tablero[f1][c1].acerto=false;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=false;/*muestra la letra del casillero*/
        *intento-=1;/*se descuenta un intento cada vez que tira dos veces*/
    }
}


#endif // COMPARACIONES_H_INCLUDED
