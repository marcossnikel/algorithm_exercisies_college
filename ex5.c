/*5- O cardápio de uma lanchonete é dado pela tabela de preços abaixo. Escreva um programa 
que  leia  a  quantidade de cada item comprado por um determinado cliente e imprima o valor 
total da sua compra.  
Hambúrguer R$ 8,00 
Batata frita R$ 12,00 
Refrigerante R$ 3,00 
Cerveja  R$ 5,00 
Doce  R$ 3,00 
*/


#include <stdio.h>

int main(void){

int priceHamb = 8;
int priceBat = 12;
int priceRefri = 3;
int priceCerva = 5;
int priceDoce = 3;

int qtdHamburg;
int qtdBat;
int qtdRefri;
int qtdCerva;
int qtdDoce;

printf("Quantos hamburguers você comprou ??");
scanf("%i",&qtdHamburg );
printf("Quantas batats fritas você comprpou??");
scanf("%i",&qtdBat);
printf("Quantos refrigerantes você bebeu??");
scanf("%i",&qtdRefri);
printf("Quantas cervejas você bebeu??");
scanf("%i",&qtdCerva);
printf("Quantos doces você comeu??");
scanf("%i",&qtdDoce);

printf("O valor a ser pago é :R$$ %i",(priceHamb*qtdHamburg)+(priceRefri*qtdRefri)+(priceBat*qtdBat)+(priceCerva*qtdCerva)+(priceDoce*qtdDoce));

}