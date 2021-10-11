#include <iostream>

using namespace std;
int promedio;
int pro,can,num;
int p,c,f;
float promedio_final;
int main()
{
	cout<<"Ingrese la cantidad de alumnos: "<<endl;
	cin>> can;
	cout<<"Ingrese la cantidad de materias que desee agregar: "<<endl;
	cin>> num;
	cout<<"Ingrese la calificacion: "<<endl;
	cin>> pro;	
	
	string alu[can];//para los alumnos
	string materia[num];//para guardar la materia
	int calif[pro];//para guardar las calif
	
	for(f=0; f<can; f++)
	{
		cout<<"Ingrese el nombre de alumno: "<<endl;
		cin>>alu[f];
		promedio=0;
		cout<<"Registro de "<<alu[f]<<endl;
		for(c=0; c<num; c++)
		{
			cout<<"Ingrese el nombre de la materia: "<<endl;
			cin>>materia[c];
			for(p=0; p<pro; p++)
			{
				cout<<"Ingrese la calificacion"<<endl;
				cin>> calif[p];
				promedio += calif[p];
			}		
		}
	
	promedio_final = promedio/ (float)num;	
    cout<<"El promedio final es de "<<promedio_final<<endl;
    if(promedio_final>5){
    	cout<<"El alumno a pasado exitosamente"<<endl;
	}else{
		cout<<"El alumnos reprobo"<<endl;
	}
	}
				
   return 0; 	
}

