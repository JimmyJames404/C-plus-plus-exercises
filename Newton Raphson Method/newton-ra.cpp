
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#include <math.h>

enum eOpt { oERROR=-1, oINICIO, oTAYLOR, oSALIR, oTOTAL };

char stmp[100];

void FuncionTaylor();


int main()
{
int opt = 0;

do
{
system( "cls" );

printf( "========== MENU ==========\n" );
printf( "%d - Serie de Taylor\n", oTAYLOR );
printf( "%d - Salir\n", oSALIR );
printf( "**\n" );
printf( "Ingresa tu opcion : " ); gets( stmp );
opt = atoi(stmp);

if ( opt <= oINICIO || opt >= oTOTAL ) //verificando opciones validas
opt = oERROR;

switch ( opt )
{
case oTAYLOR :
FuncionTaylor();
break;
case oERROR :
printf( "%&#$#% ingresa una de las opciones correctas..\n\n" );
printf( "***PRESIONA <ENTER> PARA CONTINUAR" ); getchar();
break;
};
}
while ( opt != oSALIR );

return 0;
}

void FuncionTaylor()
{
int mynum = 0;
double ans = 0;

//S=1+x+((x^2)/2!)+((x^3)/3!)+((x^4)/4!)+...

system( "cls" );
printf( "========== Serie de Taylor ==========\n" );
printf( "Ingresa un numero : " ); gets( stmp );
mynum = atoi(stmp);

if ( mynum <= 0 )
{
printf( " ERROR!!..\n");
printf( "%s no es ha sido valido..\n\n");
printf( "***PRESIONA <ENTER> PARA CONTINUAR" ); getchar();

return;
}

double mydoble = 0;
double myfact = 1;

ans = 1 + mynum;
for ( int i=2; i<mynum; i++ )
{
mydoble = pow( (double) mynum, (double)i );
myfact = 1;
for ( int j=1; j<=i; j++ )
myfact *= j;

ans = ans + ( mydoble / myfact );
}

printf( "**\n" );
printf( "El resultado es : %0.4f\n\n", ans );
printf( "***PRESIONA <ENTER> PARA CONTINUAR" ); getchar();
}


