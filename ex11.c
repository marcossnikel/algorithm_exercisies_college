/*1- Elabore um programa que seja capaz de ler um valor em reais e transformar este valor em 
dólares. A taxa de conversão não deve ser fixa, deve ser informada pelo usuário do programa.  
*/
#include <stdio.h>

int main(void){

double valueToBeConverted, dollarPrice;

printf("Primeiramente , informe o valor do dolar atual : \n");
scanf("%lf",&dollarPrice);
printf("Agora , me informe a quantidade de valor em reais a ser convertido : \n");
scanf("%lf",&valueToBeConverted);

printf("Com o dollar a $ %.2lf , o valor de R$ %.2lf em reais se torna $ %.2lf em dolar !!",dollarPrice,valueToBeConverted,(dollarPrice*valueToBeConverted));

}