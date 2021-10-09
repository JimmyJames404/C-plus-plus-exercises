//Programación lineal
#include<stdio.h>
#include <iostream>
using namespace std;

  	char nom_var1[90];
    char nom_var2[90];
    float x, y;
    int num_rest;
    float coef_var1[90];
    float coef_var2[90];
    float term_ind[90];
	float x1,y1,re1,x2,y2,re2,f1,f2;
	
int sis_ec();
main()
{
  
    //Nombramos a las variables
    printf("Ingrese el nombre de la variable 1: ");
    scanf("%s",&nom_var1);
    printf("Ingrese el nombre de la variable 2: ");
    scanf("%s",&nom_var2);
    printf("\n");
    
    //Ingresamos función objetivo
    printf("Ingrese los coeficientes de la funcion objetivo:\n");
    printf("Coeficiente de %s: ",nom_var1);
    scanf("%f",&x);
    printf("Coeficiente de %s: ",nom_var2);
    scanf("%f",&y);
    printf("\n");
    
    printf("F.O. z = %fx + %fy \n",x,y);
	f1=x;
	f2=y;
	
     
    //Ingresamos las sustituciones
    printf("\nRestricciones");
    printf("\nCuantas restricciones tiene el problema: ");
    scanf("%i",&num_rest);
    printf("\nIngrese las restricciones\n");
    for(int i=1;i<=num_rest;i++)
    {
        printf("Ingrese coeficiente de la variable 1 de la restricción %i: ",i);
        scanf("%f",&coef_var1[i]);//Var1-> coef_var1[i], Var2-> coef_var2[i],Resultado ->term_ind[i]
        printf("Ingrese coeficiente de la variable 2 de la restricción %i: ",i);
        scanf("%f",&coef_var2[i]);
        printf("Ingrese el termino independiente de la restricción %i: \n",i);
        scanf("%f",&term_ind[i]);
    }
    //printf("\n");
    for(int i=1;i<=num_rest;i++)
    {
        printf("\nRestriccion %i: %fx + %fy <= %f",i,coef_var1[i],coef_var2[i],term_ind[i]);
    } 
    
    sis_ec();
}

int sis_ec()
{
float y,x,z,xr,yr,zr;
int i=1;
x1= coef_var1[i];
y1= coef_var2[i];
re1=term_ind[i];
i=2;
x2= coef_var1[i];
y2= coef_var2[i];
re2=term_ind[i];

cout<<endl<<endl;

x=-x2*x1;
y=-x2*y1;
z=-x2*re1;

xr=x1*x2;
yr=x1*y2;
zr=x1*re2;

x=x+xr;
y=y+yr;
z=z+zr;
y=z/y;

z=re1-y*y1;
x=z/x1;
cout<<"\n LA SOLUCION OPTIMA "<<endl;
cout<<y<<" de "<<nom_var1<<endl;
cout<<x<<" de "<<nom_var2<<endl;
cout<<"\n LA GANANCIA TOTAL SEGUN LA FUNCION OBJETIVA"<<endl;
cout<<"Z = "<<f1<<"x + "<<f2<<"y "<<endl;
cout<<"Z = "<<((f1*x)+(f2*z))<<" como ganancia"<<endl;

}
