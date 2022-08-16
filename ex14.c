/*
14-  Efetuar    o    cálculo   da  quantidade  de  litros  de  combustível  gasta  em  uma  viagem,  
utilizando  um automóvel  que  faz  12  Km  por  litro.  Para  obter  o  cálculo,  o  usuário  deve  
fornecer    o    tempo    gasto    na  viagem   e  a  velocidade  média.  Des ta  forma,  será  possível  
obter   a  distância  percorrida  com  a  fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o 
valor  da  distância,  basta  calcular  a  quantidade  de  litros  de  combustível  utilizada  na  viagem 
com a fórmula: LITROS_USADOS  = DISTANCIA  /   12. O programa deve apresentar os valores 
da velocidade média, tempo gasto, a distância percorrida e a quantidade de litros utilizada na 
viagem. Dica: trabalhe com valores reais.  
*/

/*
12Km - 1 L

input´s :
    - tempo gasto
    - velocidade média


    distance = tempo * velocidade.
*/

#include <stdio.h>
int main (void){
    double timeSpent , averageSpeed;

    int kmPer1Liter = 12;

    printf("Informe para mim esses dados :\n");
    sleep(1);
    printf("Tempo gasto na viagem:\n");
    scanf("%lf",&timeSpent);
    printf("Velocidade média da viagem : \n");
    scanf("%lf",&averageSpeed);

    double distance = timeSpent * averageSpeed;

    printf("A velocidade média durante o percurso foi : %.2lf KM/H \n O Tempo gasto foi : %.1lf H \n Sendo que, a distancia percorrida foi %.2lf KM \n E por fim , a quantidade de litros gasto foi de %.2lf L",averageSpeed,timeSpent,distance,(distance/12)); 
}