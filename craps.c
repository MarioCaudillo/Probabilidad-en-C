/*              ---Simulación de un juego de Craps---
Descripción: El siguiente programa genera la simulación de un juego de Craps, si la suma de
los dados da 7 u 11 en el primer tiro, el jugador gana, si sale 2, 3 o 12 en el primer tiro
el jugador pierde, a su vez si no es ninguno de los dos primeros casos la suma de los dados 
entonces el jugador debe seguir tirando hasta que salga otra vez el número que salió al lanzar
por primera vez, pero si en estos lanzamientos la suma da 7, el jugador pierde.

Desarrollado por: Luis Mario Fernández Caudillo*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void craps(); /*creamos la función craps que contendrá el juego completo*/

int main()
{
    /*mensajes para el usuario*/
    printf("-------         CRAPS       -------\n");
    printf("------- Simulación de un juego: -------\n");
    craps();/*se invoca a la función craps() a la función principal para su funcionamiento*/


    return 0;
}

void craps()
{
    int d1, d2, d3, d4, suma1, suma2; /*declaramos todas las variables*/
    srand(time(NULL)); /*indicamos que generaremos números aleatorios*/

    d1  =   1+rand()%6; /*generamos números aleatorios entre el 1 y 6*/
    d2  =   1+rand()%6;
    suma1 = d1 + d2; /*suma1 almacena la suma de la cara de los dados*/
    printf("Sus dados suman: %i\n", suma1);

    if(suma1 == 7 || suma1 == 11) /*primer condición del juego*/
        {
            printf("Usted Gana!\n");
            return;
        }
    else if(suma1 == 2 || suma1 == 3 || suma1 == 12) /*segunda condición*/
        {
            printf("Usted pierde, la casa gana, la casa siempre gana.\n");
            return;
        }
    else    /*tercer condición del juego*/
        {
            
            for (int i = 0; suma2 != 7 ; i++) /*ciclo que genera los lanzamientos de la tercer condición*/
            {
                d3  =   1+rand()%6; /*d3 y d4 son dados que sirven para la tercer condición y sirven para seguir lanzando*/
                d4  =   1+rand()%6;
                suma2   =   d3 + d4; 
                printf("Sus dados suman: %i\n",suma2);
                if(suma2   ==   suma1) /*si el resultado del lanzamiento es igual al del primer lanzamiento...*/
                 {
                     printf("Usted Gana!\n"); /*... entonces el jugador gana*/
                    return;  /*return detiene el programa en cuanto se cumple la condición*/
                 }
            }
            

            printf("Usted pierde, la casa gana, la casa siempre gana.\n"); /*si la condición no se cumple, se imprime por defecto este mensaje*/
        }

}
