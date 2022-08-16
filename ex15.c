/*
15-  Calcular  e  apresentar  o  valor  do  volume  de  uma  lata  de  óleo, utilizando  a fórmula: V = 
3.14159 * R * R * A, em que as variáveis: V, R e A representam respectivamente o volume, o 
raio e a altura.  
*/

#include <stdio.h>
int main(void){

double raio , area;
float pi = 3.14159;


printf("Infome o raio da lata\n");
scanf("%lf",&raio);
printf("Informe a area da lata\n");
scanf("%lf",&area);

printf("O Volume da lata será : %.2lf L \n",pi * (raio * raio) * area);

}