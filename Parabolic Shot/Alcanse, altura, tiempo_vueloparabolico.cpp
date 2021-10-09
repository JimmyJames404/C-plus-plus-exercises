/*Calcula alcance, altura máxima y tiempo de vueloparabólico*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
  float PI = 3.14159265;
  float g = 9.81;
  float v0,ang;/* datos de entrada*/
  float h,R,T; /* datos de salida*/
  /*Leer datos*/
  printf("TIRO PARABOLICO\n");
  printf("Teclee velocidad inicial (en m/s): ");
  scanf("%f",&v0);
  printf("Teclee angulo del tiro (en grados): ");
  scanf("%f",&ang);
  /*Convertir a radianes*/
  ang = ang*PI/180;
  /*Calcular resultados*/
  h = v0*v0*sin(ang)*sin(ang)/2/g;
  R = v0*v0*sin(2*ang)/g;
  T = 2*v0*sin(ang)/g;
  /*Desplegar resultados*/
  printf("altura maxima: %f m\n",h);
  printf("alcance maximo: %f m\n",R);
    printf("tiempo de vuelo: %f s\n",T);
  getch();
  /*Terminar*/
  return 0;
  
  }
