/*
12-  Faça  um  programa  para  calcular  o  estoque  médio  de  uma  peça,  sendo  que:  ESTOQUE 
MÉDIO = (QUANTIDADE_MÍNIMA + QUANTIDADE_MÁXIMA) / 2.  
*/

#include <stdio.h>

int main(void){

double minQuantity , maxQuantity;
printf("Tell me the minimun amount of pieces you have :\n");
scanf("%lf",&minQuantity);
printf("Tell me the maximun amount of pieces that you have\n");
scanf("%lf",&maxQuantity);

printf("The medium inventory of pieces that you have is : %.0lf pieces",(minQuantity+maxQuantity)/2);
}