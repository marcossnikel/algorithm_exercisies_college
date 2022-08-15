/*1-    Elabore    um  programa  que  leia  dois  números  e  imprima  o  resultado  da  soma,  da  
subtração,  da multiplicação e da divisão destes números.*/

#include <stdio.h>

int main (void){

float A,B;
printf("Informe 2 números:\n");
scanf("%f\n",&A);
scanf("%f",&B);
printf("A soma de seu número 1 com seu número 2 é : %.2f\n",(A+B));
printf("A subtração de seu número 1 pelo seu número 2 é : %.2f\n",(A-B));
printf("A multiplicação de seu número 1 pelo seu número 2 é : %.2f\n",(A*B));
printf("A divisão de seu número 1 pelo seu número 2 é : %.2f\n",(A/B));
}