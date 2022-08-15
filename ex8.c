/*8-    O   custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  custo  de  fábrica  com  a  
porcentagem  do distribuidor e dos impostos  (aplicados ao custo de fábrica). Supondo que a 
porcentagem  do distribuidor  seja de  12% e os impostos de  45%, elabore um programa que 
leia o valor de fábrica e imprima o preço final de um carro.  
*/

//FABRICCOST + %DISTRIBUIDER + TAXES[FABRICCOST]  %DIS = 12 TAXES = 45
//READ FABRIC COST --> RETURN FINAL PRICE.

/*
    15 + 12%(15) = 17,25 + 45(17,25) = 25,01 < final result.
*/

#include <stdio.h>

int main(void){

double fabricCost;
printf("Qual o valor do preço de fabrica do carro ?\n");
scanf("%lf",&fabricCost);

double distPrice = fabricCost + (fabricCost * 0.15); // 17,25
printf("O preço de fabrica do carro será R$ %.2lf", distPrice + (distPrice * 0.45) );


}