/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 03/02/2022
	Programa que pide una termperatuda ern grados C a grados F
	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo flotate
		-scanf
		-Operacones aritmeticas 
		-printf para monstrar los valroes de las variables
	Objetivo:
	Mostrar el uso de variables flotantes, como declararlas, pedirlas por teclado,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo flotante (grados c°) 
	convierte los grados C° a F°, y imprime el resultado. 
	*/

#include<stdio.h>

int main(){
	//Variables
	float C, F; //variable con decimal
	//Entrada 
	printf("Introduce la temperatura en Centigrados: "); //imrpime mensaje
	scanf("%f", &C); //lee el numero insertado por el teclado
	//Proceso
	F=(9/5.0*C)+32; //ecuacion
	//Salida
	printf("La temperatura en fahrenheit es %f", F); //imrpime mensaje salida
	
	return 0;
}
