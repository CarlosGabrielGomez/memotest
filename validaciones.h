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

#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED
using namespace std;

//=============================================================================
// FUNCION : bool val_pos_fac(casillero tablero[4][4],int f,int c)
// ACCION : esta funcion devuelve  un booleano
// PARAMETROS: casillero tablero[4][4]: recibe la estructura
//  int f variable entera que contiene el valor de la fila
//  int c variable entera que contiene el valor de la columna
// DEVUELVE : bool -- > devuelde True si la posicion esta fuera de la matriz
// -----------------------------------------------------------------------------

bool val_pos_fac(casillero tablero[4][4],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario
        exista   */
    bool pos=false;
    for(int x=0; x<4; x++)
    {
        for(int y=0; y<4; y++)
        {
            if(x+1==f&&y+1==c)
            {
                pos=true;/*es TRUE si la coordenada esta fuera de la matriz*/
            }
        }
    }
    return pos;
}

//=============================================================================
// FUNCION : bool val_rep_fac(casillero tablero[4][4],int f,int c)
// ACCION : esta funcion devuelve  un booleano
// PARAMETROS: casillero tablero[4][4]: recibe la estructura
//  int f variable entera que contiene el valor de la fila
//  int c variable entera que contiene el valor de la columna
// DEVUELVE : bool -- > devuelde True si acerto en esa posicion
// -----------------------------------------------------------------------------

bool val_rep_fac(casillero tablero[4][4],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario*/
    bool pos=false;
    if(tablero[f-1][c-1].acerto!=false)/* !=false, es decir, que es true*/
    {
        /*f-1 y c-1 ya que el vector empieza en 0*/
        pos=true;/* cambio el valor de pos */
    }   /*retorno el valor de pos*/
    return pos;
}

//=============================================================================
// FUNCION : bool val_pos_mod(casillero tablero[6][6],int f,int c)
// ACCION : esta funcion devuelve  un booleano
// PARAMETROS: casillero tablero[6][6]: recibe la estructura
// DEVUELVE : bool -- > devuelde True si la posicion esta fuera de la matriz
// -----------------------------------------------------------------------------

bool val_pos_mod(casillero tablero[6][6],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario
        exista  */
    bool pos=false;
    for(int x=0; x<6; x++)
    {
        for(int y=0; y<6; y++)
        {
            if(x+1==f&&y+1==c)
            {
                pos=true;/*es TRUE si la coordenada esta fuera de la matriz*/
            }
        }
    }
    return pos;
}

//=============================================================================
// FUNCION : bool val_rep_mod(casillero tablero[6][6],int f,int c)
// ACCION : esta funcion devuelve  un booleano
// PARAMETROS: casillero tablero[6][6]: recibe la estructura
//  int f variable entera que contiene el valor de la fila
//  int c variable entera que contiene el valor de la columna
// DEVUELVE : bool -- > devuelde True si acerto en esa posicion
// -----------------------------------------------------------------------------

bool val_rep_mod(casillero tablero[6][6],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario*/
    bool pos=false;
    if(tablero[f-1][c-1].acerto!=false)/* !=false, es decir, que es true*/
    {
        /*f-1 y c-1 ya que el vector empieza en 0*/
        pos=true;/* cambio el valor de pos */
    }   /*retorno el valor de pos*/
    return pos;
}
//=============================================================================
// FUNCION : bool val_pos_dif(casillero tablero[8][8])
// ACCION : esta funcion devuelve un valor booleano
// PARAMETROS: casillero tablero[8][8]: recibe la estructura
// DEVUELVE : bool -- > devuelde True si la posicion esta fuera de la matriz
// -----------------------------------------------------------------------------

bool val_pos_dif(casillero tablero[8][8],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario
        exista   */
    bool pos=false;
    for(int x=0; x<8; x++)
    {
        for(int y=0; y<8; y++)
        {
            if(x+1==f&&y+1==c)
            {
                pos=true;/*es TRUE si la coordenada esta fuera de la matriz*/
            }
        }
    }
    return pos;
}

//=============================================================================
// FUNCION : bool val_rep_dif(casillero tablero[8][8],int f,int c)
// ACCION : esta funcion devuelve  un booleano
// PARAMETROS: casillero tablero[6][6]: recibe la estructura
//  int f variable entera que contiene el valor de la fila
//  int c variable entera que contiene el valor de la columna
// DEVUELVE : bool -- > devuelde True si acerto en esa posicion
// -----------------------------------------------------------------------------

bool val_rep_dif(casillero tablero[8][8],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario*/
    bool pos=false;
    if(tablero[f-1][c-1].acerto!=false)/* !=false, es decir, que es true*/
    {
        /*f-1 y c-1 ya que el vector empieza en 0*/
        pos=true;/* cambio el valor de pos */
    }   /*retorno el valor de pos*/
    return pos;
}

//=============================================================================
// FUNCION : validar_numero(char *cad1)
// ACCION : esta funcion valida que el usuario ingrese numeros y no letras
// PARAMETROS: char cad1: recibe el numero transformado en ascii
// DEVUELVE : bool -- > devuelde True si ingreso un valor <48 y >57
// -----------------------------------------------------------------------------

bool validar_numero(char *cad1)/* valida numero entre 0 y 9*/
{
    int x=0;
    bool valor=false;
    while(cad1[x]!='\0')
    {
        if (cad1[x]<48||cad1[x]>57)
        {
            valor=true;/*es TRUE si no ingreso numeros*/
        }
        x++;
    }
    return valor;
}
//=============================================================================
// FUNCION : void val_ingreso(int *opc)
// ACCION : esta funcion convierte una cadena a entero
// PARAMETROS: int *opc -> recibe por puntero una variable entera
// DEVUELVE : int -> devuelve un entero
// -----------------------------------------------------------------------------
void val_ingreso(int *opc)
{
    char cad1[3];
    bool a;
    do
    {
        cout << "Ingrese una opcion: ";
        sys::getline(cad1,3);
        a= validar_numero(cad1);/* */
    }
    while(a!=false);/*ciclo que finaliza si la cadena solo contine numeros*/
    *opc=atoi(cad1);/*conversion de char a entero*/
}

//=============================================================================
// FUNCION : void val_fila_columna(int *fila,int *columna)
// ACCION : esta funcion valida el ingreso de una coordenada
// PARAMETROS: int *fila -> recibe por puntero una variable entera
//             int *columna -> recibe por puntero una variable entera
// DEVUELVE : int -> devuelve un entero
// -----------------------------------------------------------------------------

void val_fila_columna(int *fila,int *columna)
{
    char cad1[3],cad2[3];/*cad1 es fila y cad2 es columna*/
    cad1[0]='\0';
    cad2[0]='\0';
    bool f,c;

    do
    {
        cout<<"Ingrese una fila :";
        sys::getline(cad1,3);
        cout<<"Ingrese una columna :";
        sys::getline(cad2,3);
        f= validar_numero(cad1);
        c= validar_numero(cad2);
    }
    while((f!=false)&&(c!=false));/*ciclo que finaliza si la cadena solo contine numeros*/
    *fila=atoi(cad1);/*conversion de char a entero*/
    *columna=atoi(cad2);/*conversion de char a entero*/

}

//=============================================================================
// FUNCION : bool validar_tiro(int a,int b,int c, int d)
// ACCION : esta funcion devuelve si gano el jugador
// PARAMETROS:
//             int a: fila actual
//             int b: columna actual
//             int c: fila anterior
//             int d: columna anterior
// DEVUELVE : bool -- > devuelde True si la posicion se repite.
// -----------------------------------------------------------------------------
bool val_tiro(int f1,int c1,int fila, int columna)
{
    bool pos=false;
    if(f1==fila-1&&c1==columna-1)
    {
        pos=true;
    }
    return pos;

}
//=============================================== ==============================
// FUNCION : bool validar_gano_f(casillero tablero[4][4])
// ACCION : esta funcion devuelve si gano el jugador
// PARAMETROS: casillero tablero[4][4]: recibe la estructura
// DEVUELVE : bool -- > devuelde True si el jugador gano.
// -----------------------------------------------------------------------------
bool val_gan_f(casillero tablero[4][4])
{
    bool gano=true;
    for(int x=0; x<4; x++)
    {
        for(int y=0; y<4; y++)
        {
            if(tablero[x][y].acerto!=true)
            {
                gano=false;
            }
        }
    }
    return gano;
}
//=============================================================================
// FUNCION : bool val_gan_m(casillero tablero[6][6])
// ACCION : esta funcion devuelve si gano el jugador en modalidad moderado
// PARAMETROS: casillero tablero[6][6]: recibe la estructura
// DEVUELVE : bool -- > devuelde True si el jugador gano.
// -----------------------------------------------------------------------------
bool val_gan_m(casillero tablero[6][6])
{
    bool gano=true;
    for(int x=0;x<6;x++)
    {
        for(int y=0;y<6;y++)
        {
            if(tablero[x][y].acerto!=true)
            {
                gano=false;
            }
        }
    }
    return gano;
}
//=============================================================================
// FUNCION : bool val_gan_d(casillero tablero[8][8])
// ACCION : esta funcion verifica si gano el jugador en modalidad dificil
// PARAMETROS: casillero tablero[8][8]: recibe la estructura
// DEVUELVE : bool -- > devuelde True si el jugador gano.
// -----------------------------------------------------------------------------
bool val_gan_d(casillero tablero[8][8])
{
    bool gano=true;
    for(int x=0; x<8;x++)
    {
        for(int y=0;y<8;y++)
        {
            if(tablero[x][y].acerto!=true)
            {
                gano=false;
            }
        }
    }
    return gano;
}

#endif // VALIDACIONES_H_INCLUDED
