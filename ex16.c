/*
16- Faça  um  algoritmo que  leia  a idade  de uma  pessoa expressa em  anos, meses e  dias e 
escreva    a  idade  dessa  pessoa  expressa apenas em dias. Considerar ano com 365 dias e mês 
com 30 dias.  
*/

/*
input´s :
    1 Y
    4 m
    6d

output :
> only days, where y = 365 m = 30;
7300 + 240 + 15
*/


#include <stdio.h>

int main(void){

int year , month , days;

printf("Informe para mim , de maneira sequencial , sua idade em anos , meses e dias.\n");
scanf("%i",&year);
scanf("%i",&month);
scanf("%i",&days);

printf("Sua idade , em dias é : %.0i dias",(year*365) + (month*30)+ days);

}