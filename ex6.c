/*6- Uma concessionária de veículos paga a seus funcionários um salário de R$350,00 mais uma 
comissão  de  R$200,00  por  cada  carro  vendido.  Elabore  um  programa que leia o número de 
carros vendidos por um determinado funcionário e imprima seu salário total.  
*/

//350 + 200 * CARROVENDIDO;

#include <stdio.h>

int main(void){

    int nCarroVendido;
    printf("Informe a quantidade de carros vendidos : ");
    scanf("%i",&nCarroVendido);

    printf("Seu salário será: %i",(nCarroVendido*200)+ 350);
}