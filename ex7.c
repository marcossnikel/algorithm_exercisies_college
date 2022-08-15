/*7- Em uma determinada loja, o preço dos produtos na prateleira é mostrado sem se adicionar 
o imposto. Considerando que o valor do imposto seja de 17% sobre o valor de prateleira, crie 
um programa que leia o preço de um produto e mostre o valor do imposto e o valor total a ser 
pago pelo consumidor.  
*/

#include <stdio.h>

int main(void){

float productPrice;
printf("Informe o preço do produto : ");
scanf("%f",&productPrice);

printf("O preço de seu produto é R$ %.2f , o valor em impostos desse produto é R$ %.2f totalizando como preço final R$ %.2f",productPrice , (productPrice/100*17),(productPrice/100*17)+ productPrice);

}