/*4-  O  Instituto  Nacional  de Meteorologia (INM) mede a quantidade de chuva em milímetros. 
Devido à um acordo entre o INM e o Instituto Britânico (IB), será necessário fazer o envio das 
informações  brasileiras  para  Londres.  Entretanto  o  IB  utiliza como m edida da quantidade de 
chuva a polegada. Sabendo-se que uma  polegada  eqüivale  a  25.4  milímetros,  escreva  um  
programa    que    leia   a  quantidade  de  chuva  em milímetros e imprima esta quantidade em 
polegadas.  
*/


//1p = 25.4

#include <stdio.h>

int main(void){

    double chuvaMM;
    printf("Imprima a quantidade de chuva em milímetros :\n");
    scanf("%lf",chuvaMM);

    double chuvaPolegada = chuvaMM * 25.4;

    printf("A quantidade de chuvas em polegadas é : %.2lf\n",chuvaPolegada);

}