/*3-  Para  realizar  a  conversão  de  temperatura  da  escala  Celsius  para  a  escala  Fahrenheit  é 
necessário usar a fórmula F  =  1.8  * C  +  32. Escreva um  programa que leia uma temperatura 
em Celsius e imprima a temperatura convertida para Fahrenheit.  
*/
#include <stdio.h>

int main (void){
float tempCelsius;

printf("Informe a temperatura em Celsius : \n");
scanf("%f",&tempCelsius);

float fahrenheit = (1.8 * tempCelsius) + 32;

printf("a Temperatura em farenheit é %.0f\n",fahrenheit);
}
