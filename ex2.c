#include <stdio.h>

int main()
{
  
int tempDom , tempSeg,  tempTer, tempQua, tempQui, tempSex ,tempSab;
printf("Informe a temperatura dos dias :\n");
scanf("%i\n",&tempDom);
scanf("%i\n",&tempSeg);
scanf("%i\n",&tempTer);
scanf("%i\n",&tempQua);
scanf("%i\n",&tempQui);
scanf("%i\n",&tempSex);
scanf("%i",&tempSab);

int media = (tempDom + tempSeg +tempTer + tempQua +tempQui +tempSex +tempSab)/ 7;
printf("A media de temperatura é : %i\n",media);
}
