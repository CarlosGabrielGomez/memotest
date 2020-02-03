////#############################################################################
// ARCHIVO : funciones.h
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
// Libreria para inicializar el tablero
//
////////////////////// ///////////////////////////////////////////////////////////

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
using namespace std;
struct casillero
{
    char letra[2];/*variable que almacena el caracter del casillero*/
    bool acerto;/*esta variable indica si el usuario tuvo una coincidencia*/
    bool cargado;/*esta variable sirve para indicar si fue cargada*/
};
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void salir(bool *entrar)
// ACCION : modifica el contenido de una variable booleana
// PARAMETROS: variable booleana
// DEVUELVE : nada
// -----------------------------------------------------------------------------

void salir(bool *entrar)
{
    sys::cls();/*borro la pantalla*/
    *entrar=false;/*cambio el valor por puntero*/
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void ini_tab_fac (casillero tablero[4][4])
// ACCION : inicializa el tablero en modaliadad facil
// PARAMETROS:casillero tablero[4][4]
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void ini_tab_fac(casillero tablero[4][4])
{
    for(int x=0; x<4; x++) /**/
    {
        for(int y=0; y<4; y++) /**/
        {
            tablero[x][y].letra[0]='\0';/*inicializacion de cadena*/
            tablero[x][y].acerto=false;/*inicializacion de la variable boolean*/
            tablero[x][y].cargado=false;/*inicializacion de la variable boolean*/
        }
    }
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void car_fac(casillero tablero[4][4])
// ACCION : carga el tablero en modalidad facil
// PARAMETROS:casillero tablero[4][4]
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void car_fac(casillero tablero[4][4])
{
    /*recibe el tamaño del tablero en dificultad facil*/
    char alfabeto[2]= {'A'}; /*valor 65 en la tabla ASCII*/
    /*arrancamos en la letra A*/
    int fila,columna;/*variables que guardan las posiciones en la matriz*/
    for(int x=0; x<8; x++) /*ciclo correspondiente a la cantidad de fichas*/
    {
        /*8 pares de fichas*/
        for(int y=0; y<2; y++) /*ciclo para cada par de fichas*/
        {
            /* 2 vueltas por cada ficha*/
            do
            {
                fila=sys::random(4);/*toma valores de 0 hasta el tamaño*/
                columna=sys::random(4);/*toma valores de 0 hasta el tamaño*/
            }
            while(tablero[fila][columna].cargado!=false);/*reviso que no se halla cargado nada*/
            tablero[fila][columna].cargado=true;/*modifico el valor de cargado a true*/
            strcpy(tablero[fila][columna].letra,alfabeto);/*copio un elemento
            de la cadena fichas*/
        }
        alfabeto[0]+=1;/* incremento el valor del caracter*/
        /*Esto lo hago cuando termina de cargar la letra dos veces*/
        /* de este modo paso al siguiente valor de la tabla ASCII*/
    }
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void ini_tab_mod(casillero tablero[6][6])
// ACCION : inicializa el tablero en modaliadad moderado
// PARAMETROS:casillero tablero[6][6]
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void ini_tab_mod(casillero tablero[6][6])
{
    for(int x=0; x<6; x++) /**/
    {
        for(int y=0; y<6; y++) /**/
        {
            tablero[x][y].letra[0]='\0';/*inicializa la cadena*/
            tablero[x][y].acerto=false;/*inicializacion de la variable boolean*/
            tablero[x][y].cargado=false;/*inicializacion de la variable boolean*/
        }
    }
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void car_mod(casillero tablero[6][6])
// ACCION : carga el tablero en modalidad moderado
// PARAMETROS:casillero tablero[6][6]
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void car_mod(casillero tablero[6][6])
{
    /*recibe el tamaño del tablero en dificultad facil*/
    char alfabeto[2]= {'A'}; /*valor 65 en la tabla ASCII*/
    /*arrancamos en la letra A*/
    int fila,columna;/*variables que guardan las posiciones en la matriz*/
    for(int x=0; x<18; x++) /*ciclo correspondiente a la cantidad de fichas*/
    {
        /*18 pares de fichas*/
        for(int y=0; y<2; y++) /*ciclo para cada par de fichas*/
        {
            /* 2 vueltas por cada ficha*/
            do
            {
                fila=sys::random(6);/*toma valores de 0 hasta el tamaño*/
                columna=sys::random(6);/*toma valores de 0 hasta el tamaño*/
            }
            while(tablero[fila][columna].cargado!=false);/*reviso que no se halla cargado nada*/
            tablero[fila][columna].cargado=true;/*modifico el valor de cargado a true*/
            strcpy(tablero[fila][columna].letra,alfabeto);/*copio un elemento
            de la cadena fichas*/
        }
        alfabeto[0]+=1;/* incremento el valor del caracter*/
        /*Esto lo hago cuando termina de cargar la letra dos veces*/
        /* de este modo paso al siguiente valor de la tabla ASCII*/
    }
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void ini_tab_dif(casillero tablero[8][8])
// ACCION : inicializa el tablero en modaliadad dificil
// PARAMETROS:casillero tablero[8][8]
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void ini_tab_dif(casillero tablero[8][8])
{
    for(int x=0; x<8; x++) /**/
    {
        for(int y=0; y<8; y++) /**/
        {
            tablero[x][y].letra[0]='\0';/*inicializacion de la cadena*/
            tablero[x][y].acerto=false;/*inicializacion de la variable booleana*/
            tablero[x][y].cargado=false;/*inicializacion de la variable booleana*/
        }
    }
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void car_dif(casillero tablero[8][8])
// ACCION : carga el tablero en modalidad dificil
// PARAMETROS:casillero tablero[8][8]
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void car_dif(casillero tablero[8][8])
{
    /*recibe el tamaño del tablero en dificultad facil*/
    char alfabeto[2]= {'A'}; /*valor 65 en la tabla ASCII*/
    /*arrancamos en la letra A*/
    int fila,columna;/*variables que guardan las posiciones en la matriz*/
    for(int x=0; x<32; x++) /*ciclo correspondiente a la cantidad de fichas*/
    {
        /*8 pares de fichas*/
        for(int y=0; y<2; y++) /*ciclo para cada par de fichas*/
        {
            /* 2 vueltas por cada ficha*/
            do
            {
                fila=sys::random(8);/*toma valores de 0 hasta el tamaño*/
                columna=sys::random(8);/*toma valores de 0 hasta el tamaño*/
            }
            while(tablero[fila][columna].cargado!=false);/*reviso que no se halla cargado nada*/
            tablero[fila][columna].cargado=true;/*modifico el valor de cargado a true*/
            strcpy(tablero[fila][columna].letra,alfabeto);/*copio un elemento
            de la cadena fichas*/
        }
        if(alfabeto[0]==90)
        {
            alfabeto[0]-=41;/*solo para la modalidad dificil incluimos numeros*/
        }
        else
        {
            alfabeto[0]+=1;/* incremento el valor del caracter*/
            /*Esto lo hago cuando termina de cargar la letra dos veces*/
            /* de este modo paso al siguiente valor de la tabla ASCII*/
        }

    }
}



#endif // FUNCIONES_H_INCLUDED
