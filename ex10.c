/*
10- Escreva um programa  que,  lendo  o  raio  de  um  círculo,  imprima  sua  a  área  e  sua 
circunferência.  Onde:    Comprimento = 2 * PI * Raio      e     Área = PI * Raio2  
*/

/* input = raio.
1st output 2 * 3.14 * input
2nd output 3.14 * input * input
*/

#include <stdio.h>
int main (void){

double raio
printf("Diga o tamanho do raio do circulo :\n");
scanf("%lf",&raio);
sleep(1);

double pi = 3.14;

printf("O comprimento do circulo é : %lf e sua área : %lf",(2*pi*raio),(pi*(raio*raio)));
}