////#############################################################################
// ARCHIVO : ejercicio.h
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
// libreria que inicia las partidas del jugador
//
////////////////////// ///////////////////////////////////////////////////////////
#ifndef EJERCICIOS_H_INCLUDED
#define EJERCICIOS_H_INCLUDED

using namespace std;

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void facil()
// ACCION : inicializa el modo facil
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void facil()
{
    sys::cls();
    /*:::===Inicializacion de la funcion===:::*/
    casillero tablero[4][4];
    ini_tab_fac(tablero);
    car_fac(tablero);

    /*:::===decalaracion de variables obligatorias===:::*/
    int aciertos=0,intento=20,fila,columna,b1=0;
    int f1,c1,f2,c2;
    bool posicion,repetido,tiro;
    bool comp;/*variable bandera*/
    /* pos -> posicion,tir-> tiro ,rep -> repetido*,gan->gano*/
    for(int x=0; x<20; x++) /*el ciclo termina con la cantidad de intentos*/
    {
        for(int y=0; y<2; y++)
        {
            /*ciclo de 2 vueltas*/
            do
            {
                sys::cls();
                mos_cas_fac(tablero,aciertos,intento);
                val_fila_columna(&fila,&columna);

                if(fila==0&&columna==0)
                {
                    return;
                }
                if(fila==9&&columna==9)
                {
                    sys::cls();
                    menu_ayuda();
                } /*                     */
                if((fila==10&&columna==10)&&(b1==0))
                {
                    sys::cls();
                    mos_tab_fac_flash(tablero);
                    b1++;
                } /*              */
                if(y==0)
                {
                    posicion=val_pos_fac(tablero,fila,columna);
                    repetido=val_rep_fac(tablero,fila,columna);
                    tiro=false;/*en el primer tiro no es necesario comprobar que se repita*/
                }
                else

                {
                    posicion=val_pos_fac(tablero,fila,columna);
                    repetido=val_rep_fac(tablero,fila,columna);
                    tiro=val_tiro(f1,c1,fila,columna);
                }
            }
            while(posicion!=true||repetido!=false||tiro!=false);
            /* el ciclo termina cuando la fila y columna estan dentro
            de la matriz ,no acerto previamente, y no repite fila y columna
            dos veces*/
            if(y==0)
            {
                /*cuando tira por primer vez*/
                f1=fila-1;
                c1=columna-1;
                tablero[f1][c1].acerto=true;
            }
            else
            {
                /*cuando tira por segunda vez*/
                f2=fila-1;
                c2=columna-1;
                tablero[f2][c2].acerto=true;
                com_let_fac(tablero,f1,c1,f2,c2,&aciertos,&intento);
            } /*al finalizar los dos tiros compara si coinciden las letras*/

        }/*al terminar de dar 2 vueltas*/
        /*esta seccion es para comprobar si el usuario gano o perdio en el juegos*/

        if(intento==0)
        {
            perdio();asi();
            mos_sol_fac(tablero);
            break;
        }
        else if((comp=val_gan_f(tablero))!=false)
        {
            /* revisa a traves de una funcion si el usuario gano*/
            gano();break;
        }
    }/*fin del ciclo intentos*/
    sys::cls();

}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void moderado()
// ACCION : inicializa el modo moderado
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void moderado()
{
    sys::cls();
    /*:::===Inicializacion de la funcion===:::*/
    casillero tablero[6][6];
    ini_tab_mod(tablero);
    car_mod(tablero);

    /*:::===decalaracion de variables obligatorias===:::*/
    int aciertos=0,intento=40,fila,columna,b1=0;
    int f1,c1,f2,c2;
    bool posicion,repetido,tiro;
    bool comp;/*variable bandera*/
    /* pos -> posicion,tir-> tiro ,ayu->ayuda ,rep -> repetido*,gan->gano*/

    for(int x=0; x<40; x++) /*el ciclo termina con a cantidad de intentos*/
    {
        for(int y=0; y<2; y++)
        {
            /*ciclo de 2 vueltas*/
            do
            {
                sys::cls();
                mos_cas_mod(tablero,aciertos,intento);
                val_fila_columna(&fila,&columna);
                if(fila==0&&columna==0)
                {
                    return;
                }
                if(fila==9&&columna==9)
                {
                    sys::cls();
                    menu_ayuda();
                }
                if((fila==10&&columna==10)&&(b1==0))
                {
                    sys::cls();
                    mos_tab_mod_flash(tablero);
                    b1++;
                }
                if(y==0)
                {
                    posicion=val_pos_mod(tablero,fila,columna);
                    repetido=val_rep_mod(tablero,fila,columna);
                    tiro=false;
                }
                else
                {
                    posicion=val_pos_mod(tablero,fila,columna);
                    repetido=val_rep_mod(tablero,fila,columna);
                    tiro=val_tiro(f1,c1,fila,columna);
                }
            }
            while(posicion!=true||repetido!=false||tiro!=false);
            /* el ciclo termina cunado la fila y columna estan dentro
            de la matriz ,no acerto previamente, y no repite fila y columna
            dos veces*/
            sys::cls();
            if(y==0)
            {
                f1=fila-1;
                c1=columna-1;
                tablero[f1][c1].acerto=true;
            }
            else
            {
                f2=fila-1;
                c2=columna-1;
                tablero[f2][c2].acerto=true;
                com_let_mod(tablero,f1,c1,f2,c2,&aciertos,&intento);
            }
        }/*al terminar de dar 2 vueltas*/


        /*esta seccion es para comprobar si el usuario gano o perdio en el juegos*/
        if(intento==0)
        {
            perdio();
            asi();
            mos_sol_mod(tablero);
            break;
        }
        else if((comp=val_gan_m(tablero))!=false)
        {
            gano();break;
        }
    }
    sys::cls();
}
///========================================================================///
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void dificil()
// ACCION : inicializa el modo dificil
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void dificil()
{
    sys::cls();
    /*:::===Inicializacion de la funcion===:::*/
    casillero tablero[8][8];
    ini_tab_dif(tablero);
    car_dif(tablero);

    /*:::===decalaracion de variables obligatorias===:::*/
    int aciertos=0,intento=60,fila,columna,b1=0;
    int f1,c1,f2,c2;/**/
    bool posicion,repetido,tiro;
    bool comp;/*variable bandera*/
    /* pos -> posicion,tir-> tiro ,ayu->ayuda ,rep -> repetido*,gan->gano*/

    for(int x=0; x<60; x++) /*el ciclo termina con a cantidad de intentos*/
    {
        for(int y=0; y<2; y++)
        {
            /*ciclo de 2 vueltas*/
            do
            {
                sys::cls();
                mos_cas_dif(tablero,aciertos,intento);
                val_fila_columna(&fila,&columna);
                if(fila==0&&columna==0)
                {
                    return;
                }
                if(fila==9&&columna==9)
                {
                    sys::cls();
                    menu_ayuda();
                }
                if((fila==10&&columna==10)&&(b1==0))
                {
                    sys::cls();
                    mos_tab_dif_flash(tablero);
                    b1++;
                }
                if(y==0)
                {
                    posicion=val_pos_dif(tablero,fila,columna);
                    repetido=val_rep_dif(tablero,fila,columna);
                    tiro=false;
                }
                else
                {
                    tiro=val_tiro(f1,c1,fila,columna);
                    posicion=val_pos_dif(tablero,fila,columna);
                    repetido=val_rep_dif(tablero,fila,columna);
                }
            }
            while(posicion!=true||repetido!=false||tiro!=false);
            /* el ciclo termina cunado la fila y columna estan dentro
            de la matriz ,no acerto previamente, y no repite fila y columna
            dos veces*/
            sys::cls();
            if(y==0)
            {
                f1=fila-1;
                c1=columna-1;
                tablero[f1][c1].acerto=true;
            }
            else
            {
                f2=fila-1;
                c2=columna-1;
                tablero[f2][c2].acerto=true;
                com_let_dif(tablero,f1,c1,f2,c2,&aciertos,&intento);
            }
        }/*al terminar de dar 2 vueltas*/

        /*esta seccion es para comprobar si el usuario gano o perdio en el juegos*/
        if(intento==0)
        {
            perdio();
            asi();
            mos_sol_dif(tablero);
            break;
        }
        else if((comp=val_gan_d(tablero))!=false)
        {
            gano();break;
        }
    }
    sys::cls();
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void jugar()
// ACCION : inicializa la partida del jugador
// PARAMETROS:ninguno
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void jugar()
{
    sys::cls();
    bool entrar=true;
    int opcion;
    while(entrar!=false)
    {
        menu_jugar();
        val_ingreso(&opcion);
        switch(opcion)
        {
        case 1:
        {
            facil();
        }
        break;
        case 2:
        {
            moderado();
        }
        break;
        case 3:
        {
            dificil();
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

#endif // EJERCICIOS_H_INCLUDED
