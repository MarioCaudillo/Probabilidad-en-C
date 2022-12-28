/*              ---Simulación de juego de dados con frecuencia absoluta y relativa---
Descripción: El siguiente programa genera la simulación de 36 lanzamientos de un par de dados,
a su vez muestra la suma de las caras de ambos dados. Posteriormente genera la tabla de frecuencia
absoluta, relativa y porcentaje correspondiente a los datos arrojados por la simulación. 

Desarrollado por: Luis Mario Fernández Caudillo*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 36 /*definimos la constante dada por el espacio muestral de ambos dados 6^2*/
main(){
    int d1, d2, x[MAX]; /*variables principales que serán enteros*/
    float fa = 0, fr = 0, per=0, fa1 = 0, fr1 = 0, per1=0, fa2 = 0, fr2 = 0, per2=0, fa3 = 0, fr3 = 0, per3=0, fa4 = 0, fr4 = 0, per4=0, fa5 = 0, fr5 = 0, per5=0, fa6 = 0, fr6 = 0, per6=0, fa7 = 0, fr7 = 0, per7=0,fa8 = 0, fr8 = 0,  per8=0,
	fa9 = 0, fr9 = 0, per9=0, fa10 = 0, fr10 = 0, per10; /*variables flotantes que almacenarán cálculos*/
	srand(time(NULL));/*indicamos que generaremos números aleatorios*/
    printf("Numero	Dado1	Dado2	X \n");/*indica datos*/
    printf("---------------------------\n");
    for(int i = 1; i<=MAX;i++){/*ciclo que genera los 36 lanzamientos, se inicia en 1*/
        d1  =   1+rand()%6;
        d2  =   1+rand()%6;
        x[0] = d1+d2;/*X es la variable aleatoria que contiene la suma de ambas caras de los dados*/
        printf("%d	%d	%d	%d \n", i, d1, d2, x[0]);/*imprime datos*/
        /*comparaciones para extraer los elementos del espacio muestral(todos los valores que
        la suma de caras nos arroja) del arreglo X*/
        if(x[0]==2){
            fa++;/*contador de veces que aparece el elemento en el arreglo(frecuencia absoluta)*/
            fr= fa / MAX;/*frecuencia relativa, frecuencia/N */
            per= fr*100;/*porcentaje resultante*/
        }
        if(x[0]==3){
            fa1++;
            fr1= fa1 / MAX;
            per1= fr1*100;
        }
        if(x[0]==4){
            fa2++;
            fr2= fa2 / MAX;
            per2= fr2*100;
        }
        if(x[0]==5){
            fa3++;
            fr3= fa3 / MAX;
            per3= fr3*100;
        }
        if(x[0]==6){
            fa4++;
            fr4= fa4 / MAX;
            per4= fr4*100;
        }
        if(x[0]==7){
            fa5++;
            fr5= fa5 / MAX;
            per5= fr5*100;
        }
        if(x[0]==8){
            fa6++;
            fr6= fa6 / MAX;
            per6= fr6*100;
        }
        if(x[0]==9){
            fa7++;
            fr7= fa7 / MAX;
            per7= fr7*100;
        }
        if(x[0]==10){
            fa8++;
            fr8= fa8 / MAX;
            per8= fr8*100;
        }
        if(x[0]==11){
            fa9++;
            fr9= fa9 / MAX;
            per9= fr9*100;
        }
        if(x[0]==12){
            fa10++;
            fr10= fa10 / MAX;
            per10= fr10*100;
        }
    }
    /*Tabla de datos final*/
    printf("---------------------------\n\n");
    printf("SUMA(X)		Frecuencia		Frecuencia Relativa		Porcentaje % \n");
    printf("-------------------------------------------------------------------------------------\n");
	printf(" 2			%.1f			%.4f			%f%\n", fa, fr, per);
	printf(" 3			%.1f			%.4f			%f%\n", fa1, fr1, per1);
	printf(" 4			%.1f			%.4f			%f%\n", fa2, fr2, per2);
	printf(" 5			%.1f			%.4f			%f%\n", fa3, fr3, per3);
	printf(" 6			%.1f			%.4f			%f%\n", fa4, fr4, per4);
	printf(" 7			%.1f			%.4f			%f%\n", fa5, fr5, per5);
	printf(" 8			%.1f			%.4f			%f%\n", fa6, fr6, per6);
	printf(" 9			%.1f			%.4f			%f%\n", fa7, fr7, per7);
	printf(" 10			%.1f			%.4f			%f%\n", fa8, fr8, per8);
	printf(" 11			%.1f			%.4f			%f%\n", fa9, fr9, per9);
	printf(" 12			%.1f			%.4f			%f%\n", fa10, fr10, per10);
}