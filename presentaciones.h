////#############################################################################
// ARCHIVO : presentaciones.h
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

#ifndef PRESENTACIONES_H_INCLUDED
#define PRESENTACIONES_H_INCLUDED
#include "CSYSTEM/csystem.h"
#include "validaciones.h"
using namespace std;


//=============================================================================
// FUNCION : void menu_principal()
// ACCION : esta funcion devuelve el menu del juego
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void menu_principal()
{
    sys::cls();

    cout<<"\t"<<"+=====================================================+"<<endl;
    cout<<"\t"<<"|                    MEMOTEST                         |"<<endl;
    cout<<"\t"<<"+-----------------------------------------------------+"<<endl;
    cout<<"\t"<<"|    OPCION...1                          JUGAR        |"<<endl;
    cout<<"\t"<<"|    OPCION...2                          AYUDA        |"<<endl;
    cout<<"\t"<<"|    OPCION...3                          SALIR        |"<<endl;
    cout<<"\t"<<"+-----------------------------------------------------+"<<endl;

}
//=============================================================================
// FUNCION : void menu_jugar()
// ACCION : esta funcion devuelve el menu de los niveles del juego
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void menu_jugar()
{
    sys::cls();

    cout<<"\t"<<"+=====================================================+"<<endl;
    cout<<"\t"<<"|                    NIVELES                          |"<<endl;
    cout<<"\t"<<"+-----------------------------------------------------+"<<endl;
    cout<<"\t"<<"|    OPCION...1                          FACIL        |"<<endl;
    cout<<"\t"<<"|    OPCION...2                          MODERADO     |"<<endl;
    cout<<"\t"<<"|    OPCION...3                          DIFICIL      |"<<endl;
    cout<<"\t"<<"|    OPCION...4                          ATRAS        |"<<endl;
    cout<<"\t"<<"+-----------------------------------------------------+"<<endl;

}

//=============================================================================
// FUNCION : ayuda_presentacion()
// ACCION : esta funcion devuelve el menu de ayuda del memotest
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void ayuda_presentacion()
{
    sys::cls();
    cout<<"\t"<<"+=====================================================+"<<endl;
    cout<<"\t"<<"|                    MEMOTEST - AYUDA                 |"<<endl;
    cout<<"\t"<<"+-----------------------------------------------------+"<<endl;
    cout<<"\t"<<"|    OPCION...1                          COMO JUGAR   |"<<endl;
    cout<<"\t"<<"|    OPCION...2                          NIVELES      |"<<endl;
    cout<<"\t"<<"|    OPCION...3                          TECLA FLASH  |"<<endl;
    cout<<"\t"<<"|    OPCION...4                          ATRAS        |"<<endl;
    cout<<"\t"<<"+-----------------------------------------------------+"<<endl;

}


//=============================================================================
// FUNCION : void asi()
// ACCION : esta funcion devuelve un mensaje advirtiendo cual era la distribucion
// de las fichas
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void asi()
{
    sys::cls();
    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                   SOLUCION                          |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    sys::msleep(2);
    sys::cls();
}

//=============================================================================
// FUNCION : void perdio()
// ACCION : esta funcion devuelve un mensaje advirtiendo que el usuario perdio
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void perdio()
{
    sys::cls();
    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                   HAS PERDIDO                       |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    sys::msleep(2);
    sys::cls();
}
//=============================================================================
// FUNCION : void gano()
// ACCION : esta funcion devuelve un mensaje advirtiendo que el usuario gano
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void gano()
{
    sys::cls();
    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                   HAS GANADO                        |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    sys::msleep(2);
    sys::cls();
}
//=============================================================================
// FUNCION : void fallaste()
// ACCION : esta funcion devuelve un mensaje advirtiendo que no hubo coindicencias
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void fallaste()
{
    sys::cls();
    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                   HAS FALLADO                       |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    sys::msleep(1);
    sys::cls();
}
//=============================================================================
// FUNCION : void acertaste()
// ACCION : esta funcion devuelve un mensaje advirtirtiendo que hubo coincidencia
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void acertaste()
{
    sys::cls();
    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                   HAS ACERTADO                      |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    sys::msleep(1);
    sys::cls();
}

//=============================================================================
// FUNCION : void ingreso()
// ACCION : esta funcion devuelve un mensaje advirtiendo de un ingreso incorrecto
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void ingreso()
{

    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                INGRESE UNA OPCION VALIDA            |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    sys::msleep(1);
    sys::cls();

}

//=============================================================================
// FUNCION : void como_jugar()
// ACCION : esta funcion muestra las reglas del juego memotest
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void como_jugar()
{

    sys::cls();
    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+" << endl;
    cout<<"\t"<<"\t"<<"|                   MEMOTEST - JUGAR                      |" << endl;
    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+" << endl;
    cout<<"\t"<<"+--------------------------------------------------------------------+" << endl;
    cout<<"\t"<<"|  El memotest es un juego que requiere de gran habilidad mental.    |" << endl;
    cout<<"\t"<<"|  Para comenzar a jugar, se colocan diferentes 'fichas' repetidas   |" << endl;
    cout<<"\t"<<"|  boca abajo formando un cuadrado de manera aleatoria. El tablero   |" << endl;
    cout<<"\t"<<"|  puede tiene diferenctes dificultades: facil, moderado y dificil   |" << endl;
    cout<<"\t"<<"|  Comienza el participante dando vuelta primero una ficha y         |" << endl;
    cout<<"\t"<<"|  luego otra tratando que sean pares, si lo consigue se considera   |" << endl;
    cout<<"\t"<<"|  un acierto.Si las figuras son distintas, se dan vuelta            |" << endl;
    cout<<"\t"<<"|  nuevamente en la misma posicion que ocupaban para dar lugar al    |" << endl;
    cout<<"\t"<<"|  proxima juaga y asi sucesivamente.                                |" << endl;
    cout<<"\t"<<"|  El juego finaliza cuando el jugador logra completar la cantidad   |" << endl;
    cout<<"\t"<<"|  de aciertos o cuando se acaban los intentos                       |" << endl;
    cout<<"\t"<<"+--------------------------------------------------------------------+"<<endl;

    system("pause>null");
}

//=============================================================================
// FUNCION : void niveles()
// ACCION : esta funcion explica los diferentes niveles del memotest
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void niveles()
{

    sys::cls();
    cout<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"|                   MEMOTEST - NIVELS                     |"<<endl;
    cout<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    cout<<"|    El memotest cuenta con diferentes niveles de dificultad.       |" << endl;
    cout<<"|    El nivel FACIL cuenta con un tablero de 4X4. En este nivel     |" << endl;
    cout<<"|    existen la cantidad de 20 intentos para resolverlo. Se gana    |" << endl;
    cout<<"|    cuando se consiguen 8 aciertos en este nivel.                  |" << endl;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    cout<<"|    El nivel MODERADO cuenta con un tablero de 6X6. En este        |" << endl;
    cout<<"|    nivel existen la cantidad de 40 intentos para resolverlo.      |" << endl;
    cout<<"|    Se gana cuando se consiguen 18 aciertos en este nivel.         |" << endl;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    cout<<"|    El nivel DIFICIL cuenta con un tablero de 8X8. En este         |" << endl;
    cout<<"|    nivel existen la cantidad de 60 intentos para resolverlo.      |" << endl;
    cout<<"|    Se gana cuando se consiguen 32 aciertos en este nivel.         |" << endl;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    system("pause>null");

}
//=============================================================================
// FUNCION : void tecla_flash()
// ACCION : esta funcion explica el funcionamiento de la tecla flash
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void tecla_flash()
{
    sys::cls();
    cout<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"|                 MEMOTEST - TECLA FLASH                  |"<<endl;
    cout<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    cout<<"|    Esta funcion se podra utilizar una sola vez por juego. Para    |" << endl;
    cout<<"|    utilizarla, se debera combinar la fila 10 y la columna 10      |" << endl;
    cout<<"|    y nos mostrara el resultado del juego por unos segundos.Una    |" << endl;
    cout<<"|    vez utilizada. no volvera a utilizar hasta la proxima          |" << endl;
    cout<<"|    partida                                                        |" << endl;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    system("pause>null");

}

//=============================================================================
// FUNCION : void mos_tab_fac_flash(casillero tablero[4][4])
// ACCION : esta funcion devuelve tablero resuelto durante 3 segundos
// PARAMETROS: casillero tablero[4][4]: recibe la estructura de la matriz resuelta
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_tab_fac_flash(casillero tablero[4][4])
{
    cout<<"+-----------------------------------------------------+"<<endl;
    cout<<"|                 MEMOTEST-NIVEL FACIL                 |"<<endl;
    cout<<"+-----------------------------------------------------+"<<endl;
    for(int t=0; t<4; t++)
    {
        cout<<"|"<<"\t"<<"C"<<t+1<<"\t"<<"|";

    }
    cout<<endl;
    cout<<"+-------------------------------------------------------------------+";
    for(int x=0; x<4; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"|"<<" F"<<x+1;
        for(int y=0; y<4; y++)
        {
            cout<<"\t"<< tablero[x][y].letra<<"\t";
        }
        cout<<endl;
    }
    cout<<"+-------------------------------------------------------------------+"<<endl;
    sys::msleep(3);
    sys::cls();

}

//=============================================================================
// FUNCION : void mos_sol_fac(casillero tablero[4][4])
// ACCION : esta funcion devuelve tablero resuelto hasta que el usuario presione
// una tecla
// PARAMETROS: casillero tablero[4][4]: recibe la estructura de la matriz resuelta
// DEVUELVE : nada.
// -----------------------------------------------------------------------------


void mos_sol_fac(casillero tablero[4][4])
{
    cout<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|       MEMOTEST-NIVEL FACIL     |"<<endl;
    cout<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<4; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<"|";
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<4; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<4; y++)
        {
            cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+";
    }
    cout<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<4; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"\t"<<"+-------+-+-----+-+-----+-+-----+";
    cout<<endl;
    system("pause>null");
}

//=============================================== ==============================
// FUNCION : void mos_cas_fac(casillero tablero[4][4],int aciertos,int intento)
// ACCION : esta funcion devuelve tablero con el que se va a jugar.
// PARAMETROS: casillero tablero[4][4]: recibe la estructura de la matriz a jugar
// int aciertos: recibe la cantidad de aciertos
// int aciertos: recibe la cantidad de intentos
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_cas_fac(casillero tablero[4][4],int aciertos,int intento)
{

    cout<<"\t"<<"\t"<<"+--------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|   MEMOTEST-NIVEL FACIL   |"<<endl;
    cout<<"\t"<<"\t"<<"+--------------------------+"<<endl;
    cout<<"\t"<<"\t";
    for(int t=0; t<4; t++)
    {
        cout<<"|"<<"C"<<t+1<<"|"<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<4; x++) /*ciclo correspoendiente a la cantidad de filas*/
    {
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<4; y++) /*ciclo correspoendiente a la cantidad de columnas*/
        {

            if(tablero[x][y].acerto!=false)
            {
                /*muestra la letra del casillero*/
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<(char)6<<"|";
            }

        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+";
    }

    ///=======================================================================///
    cout<<endl;
    cout<<"\t"<<"+------------------------------------------------------------+"<<endl;
    cout<<"\t"<<"| ACIERTOS: "<<aciertos;
    cout<<" INTENTOS: "<<intento<<"\t";
    cout<<"AYUDA: FILA 9-COLUMNA 9      |"<<endl;
    cout<<"\t"<<"| SALIR: FILA 0-COLUMNA 0"<<"\t";
    cout<<"FLASH: FILA 10-COLUMNA 10    |"<<endl;
    cout<<"\t"<<"+------------------------------------------------------------+"<<endl;

}

//=============================================================================
// FUNCION : mos_fac(casillero tablero[4][4])
// ACCION : esta funcion  muestra por dos segundos el contenido de dos casilleros
// PARAMETROS: casillero tablero[4][4]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_fac(casillero tablero[4][4])
{

    cout<<"\t"<<"\t"<<"+--------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|   MEMOTEST-NIVEL FACIL   |"<<endl;
    cout<<"\t"<<"\t"<<"+--------------------------+"<<endl;
    cout<<"\t"<<"\t";
    for(int t=0; t<4; t++)
    {
        cout<<"|"<<"C"<<t+1<<"|"<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<4; x++) /*ciclo correspoendiente a la cantidad de filas*/
    {
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<4; y++) /*ciclo correspoendiente a la cantidad de columnas*/
        {

            if(tablero[x][y].acerto!=false)
            {
                /*muestra la letra del casillero*/
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<(char)6<<"|";
            }

        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+";
    }
    sys::msleep(2);

}

//=============================================================================
// FUNCION : void mos_tab_mod_flash(casillero tablero[6][6])
// ACCION : esta funcion devuelve el tablero moderado duramte 3 segundos
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_tab_mod_flash(casillero tablero[6][6])
{
    cout<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|     MEMOTEST-NIVEL MODERADO   |"<<endl;
    cout<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<6; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<6; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<6; y++)
        {
            cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    }
    sys::msleep(3);
    sys::cls();


}
//=============================================================================
// FUNCION :  mos_sol_mod(casillero tablero[6][6])
// ACCION : esta funcion muestra el contenido del tablero moderado
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_sol_mod(casillero tablero[6][6])
{
    cout<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|     MEMOTEST-NIVEL MODERADO    |"<<endl;
    cout<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<6; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<"|";
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<6; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<6; y++)
        {
            cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+";
    }
    cout<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<6; t++)
    {
        cout<<"C"<<t+1<<"\t";

    }
    cout<<endl;
    cout<<"\t"<<"\t"<<"+-------+-+-----+-+-----+-+-----+";
    cout<<endl;
    system("pause>null");

}

//=============================================================================
// FUNCION : void mos_cas_mod(casillero tablero[6][6],int aciertos,int intento)
// ACCION : esta funcion devuelve el tablero de juego para el usuario
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// int aciertos variable entera para contar las coincidencias
// int intento variable entera para descontasr los intentos
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_cas_mod(casillero tablero[6][6],int aciertos,int intento)
{

    cout<<"\t"<<"\t"<<"+-----------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|          MEMOTEST-NIVEL MODERADO        |"<<endl;
    cout<<"\t"<<"\t"<<"+-----------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<6; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<6; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<6; y++)
        {
            /*ciclo correspoendiente a la cantidad de columnas*/
            if(tablero[x][y].acerto!=false)/*muestra la letra del casillero*/
            {
                /*este if va con doble parentesis para separar dos situaciones */
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";

            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<(char)6<<"|";
            }
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    }
    ///=======================================================================///
    cout<<endl;
    cout<<"\t"<<"+------------------------------------------------------------+"<<endl;
    cout<<"\t"<<"| ACIERTOS: "<<aciertos;
    cout<<" INTENTOS: "<<intento<<"\t";
    cout<<"AYUDA: FILA 9-COLUMNA 9      |"<<endl;
    cout<<"\t"<<"| SALIR: FILA 0-COLUMNA 0"<<"\t";
    cout<<"FLASH: FILA 10-COLUMNA 10    |";
    cout<<endl;
    cout<<"\t"<<"+------------------------------------------------------------+"<<endl;

}
//=============================================================================
// FUNCION : void mos_mod(casillero tablero[6][6])
// ACCION : esta funcion muestra el tablero durante dos segundos
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_mod(casillero tablero[6][6])
{

    cout<<"\t"<<"\t"<<"+-----------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|          MEMOTEST-NIVEL MODERADO        |"<<endl;
    cout<<"\t"<<"\t"<<"+-----------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<6; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<6; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<6; y++)
        {
            /*ciclo correspoendiente a la cantidad de columnas*/
            if(tablero[x][y].acerto!=false)/*muestra la letra del casillero*/
            {
                /*este if va con doble parentesis para separar dos situaciones */
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";

            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<(char)6<<"|";
            }
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    }
    sys::msleep(2);
}

//=============================================================================
// FUNCION : void mos_tab_dif_flash(casillero tablero[8][8])
// ACCION : esta funcion muestra el tablero durante 3 segundos
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_tab_dif_flash(casillero tablero[8][8])
{

    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|                   MEMOTEST-NIVEL DIFICL                 |"<<endl;
    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<8; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<8; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<8; y++)
        {
            cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+";

    }
    sys::msleep(3);
    sys::cls();
}

//=============================================================================
// FUNCION : void mos_sol_dif(casillero tablero[8][8])
// ACCION : esta funcion muestra el tablero resuelto
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_sol_dif(casillero tablero[8][8])
{

    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|                   MEMOTEST-NIVEL DIFICL                 |"<<endl;
    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<8; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<"|";
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<8; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<8; y++)
        {
            cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";
        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+";

    }
    cout<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<8; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    system("pause>null");
}

//=============================================================================
// FUNCION : void mos_cas_dif(casillero tablero[8][8],int aciertos,int intento)
// ACCION : esta funcion muestra el tablero resuelto
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// int aciertos variable entera que incrementa la cantidad de coincidencias
// int intento  variable entera que descuenta los intentos
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_cas_dif(casillero tablero[8][8],int aciertos,int intento)
{

    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|                   MEMOTEST-NIVEL DIFICL                 |"<<endl;
    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<8; t++)
    {
        cout<<"C"<<t+1<<"\t";

    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<8; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<8; y++)
        {
            /*ciclo correspoendiente a la cantidad de columnas*/
            if(tablero[x][y].acerto!=false)/*muestra la letra del casillero*/
            {
                /*este if va con doble parentesis para separar dos situaciones */
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";

            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<(char)6<<"|";
            }

        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    }
    cout<<endl;
    ///=======================================================================///

    cout<<"\t"<<"+------------------------------------------------------------+"<<endl;
    cout<<"\t"<<"| ACIERTOS: "<<aciertos;
    cout<<" INTENTOS: "<<intento<<"\t";
    cout<<"AYUDA: FILA 9-COLUMNA 9      |"<<endl;
    cout<<"\t"<<"| SALIR: FILA 0-COLUMNA 0"<<"\t";
    cout<<"FLASH: FILA 10-COLUMNA 10    |";
    cout<<endl;
    cout<<"\t"<<"+------------------------------------------------------------+"<<endl;
}

//=============================================================================
// FUNCION : void mos_dif(casillero tablero[8][8])
// ACCION : esta funcion muestra el tablero resuelto durante 2 segundos
// PARAMETROS: casillero tablero[6][6]: recibe la estructura de la matriz a jugar
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void mos_dif(casillero tablero[8][8])
{

    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|                   MEMOTEST-NIVEL DIFICL                 |"<<endl;
    cout<<"\t"<<"\t"<<"+---------------------------------------------------------+"<<endl;
    cout<<"\t"<<"\t"<<"|";
    for(int t=0; t<8; t++)
    {
        cout<<"C"<<t+1<<"\t";
    }
    cout<<endl;
    cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    for(int x=0; x<8; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<"\t"<<"|"<<"F"<<x+1;
        for(int y=0; y<8; y++)
        {
            /*ciclo correspoendiente a la cantidad de columnas*/
            if(tablero[x][y].acerto!=false)/*muestra la letra del casillero*/
            {
                /*este if va con doble parentesis para separar dos situaciones */
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|";

            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<(char)6<<"|";
            }

        }
        cout<<endl;
        cout<<"\t"<<"+-------+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+-----+-+";
    }
    sys::msleep(2);
}

//=============================================================================
// FUNCION :void menu_ayuda()
// ACCION : esta funcion permite la seleccion de opciones en el menu ayuda
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void menu_ayuda()
{
    bool entrar=true;
    int opcion;
    while (entrar!=false)
    {
        ayuda_presentacion();
        val_ingreso(&opcion);
        switch(opcion)
        {
        case 1:
        {
            como_jugar();
        }
        break;
        case 2:
        {
            niveles();
        }
        break;
        case 3:
        {
            tecla_flash();
        }
        break;
        case 4:
        {
            salir(&entrar);
        }
        break;
        default:
        {
            ingreso();
        }
        break;
        }
    }
}








#endif // PRESENTACIONES_H_INCLUDED
