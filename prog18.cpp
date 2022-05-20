/* 
Autor: Franciscomilan
Realizado: 28/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 18 en C el cual tiene una funcion que imprime un mensaje de saludo
encerrado en un marco de asteriscos, para que ejemplificar el uso de funciones void
para la materia programacion estructurada  
*/

//Libreia
#include<stdio.h>
//Prototipo de la funcion saludar
void Saludar();
//Principal
int main () {
	//Salida de datos
	printf(" Inicio el main ::::\n");
	//Llamar funcion
	Saludar();
	printf(" Termino el main ::::\n");	
	//Retorno
	return 0;
}
//Funcion saludar
void Saludar (){
	printf("*****************************\n");
	printf("**  H O L A    M U N D O   **\n");
	printf("*****************************\n");
}


