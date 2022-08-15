/*9-  Em  um  curso  de  programação  de  computadores,  a  nota  final  de  um estudante é dada a 
partir  de  seu  desempenho  em  três  aspectos. Existe uma prova teórica que vale 30% da nota 
final. Uma segunda prova teórica  que  equivale  a  20%. E, uma  última  prova, que  equivale  a  
50%  da  nota. Elabore  um  programa que leia a nota das três avaliações e imprima a nota final 
do estudante. 
*/

/*
theorical -> 30%
2nd theoricao -> 20
last -> 50%
*/

//example 1st input * 0,3 2nd input * 0,2 3rd input * 0.5 -> return 1 + 2 + 3 = final Grade.


#include <stdio.h>
int main(void){

double firstGrade , secondGrade , thirdGrade;
printf("Me diga suas notas :\n");
sleep(2);

printf("Nota 1 :\n");
scanf("%lf",&firstGrade);
printf("Nota 2 : \n");
scanf("%lf",&secondGrade);
printf("Nota 3:\n");
scanf("%lf",&thirdGrade);


printf("Sua nota final é : %.2lf",(firstGrade *0.3)+(secondGrade*0.2)+(thirdGrade*0.5));
}