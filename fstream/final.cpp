
#include<iostream>
#include<stdlib.h>
#include<fstream>//Libreria para abrir un fichero para leer y escribir,(f es de file)
using namespace std;//ignifica que usara todos los elementos del espacio de nombres llamado STD

bool bandera = false;// Esta bandera me permitira despues activarlo al agregar la frase fin o FIN 
void escribir();//Esta funcion me servira para escribir en mi block de notas


int main(){
	escribir();	
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;//mi escritor(este lo podemos entender como cuando usaba mi int variable;(el ofstream seria mi output))
	string nombreArchivo, frase;// ocupare ambas variables para agregar nombre de archivo y su contenido
	
	cout<<"Digite el nombre que desea agregar al archivo con su respectiva extension: "<<endl;//nos imprime lo escrito
	getline(cin,nombreArchivo);//para guardar cadenas de tipo string utilizamos el getline por consiguiente va nuestros campos que vendria siendo: (guarde algo, donde quedemos que lo guarde)
	
	archivo.open(nombreArchivo.c_str(),ios::out);	// aqui estamos abriendo el archivo, encaso de no existir el ios::out lo crea, caso contrario lo sustituye
	
	if(archivo.fail()){//para verificar utilizo la condicional
		// lo anterior lo podria guadrar en un directorio en especifico como por ejemplo "d://nombre_dela_carpeta//nombre_archivo.txt"
		cout<< "No se pudo ver ni crear el archivo";//Se imprime la siguiente frase, que espero que nunca salga.
		exit(1);//Si todo lo anterior falla el programa se cerrara rapidamente; gracias a la libreria stdlib.h que nos proporciona el exist 
	}
	
	cout <<"Digite el texto que desea agregar al archivo: "<<endl;// Imprimo lo que deseo que ingrese el usuario
	cout <<"(Digite fin en una linea nueva para finalizar)"<<endl;//Imprimo la instruccion
	bandera = true;// mientras mi bandera sea true el usuario podra continuar continuar escribiendo
	
	do{// inicio mi condicion para que pueda escribir el usuario con las siguientes lineas
	frase="";	
	getline(cin,frase);// como la linea 23 escribo mi contenido ahi
	
  if((frase == "fin")||(frase == "FIN")){// aqui esta la condicion para que el usuario pueda finalizar al ingresar fin o FIN
   bandera = false;// ahora que es
  }else{
   archivo<<frase<<endl;
  }
 
}while(bandera == true);// Si lo anterior no se cumple mi bandera sera true y el usuario podra escribir libremente
	/* El siguiente codigo lo pondria si yo quisiera tener un texto predeterminado, lo unico que tendria qu hacer seria eliminar desde la linea 31
		archivo<<"Soy un texto de muestreo"<<endl; //aqui se escribe el contenido 
		archivo<<"Mas texto de ejemplo"<<endl;
		archivo<<frase;
		archivo.close();//cerrar el archivo
	*/
	
continue;
	
}
