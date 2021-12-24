/* Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees. */

#include <stdio.h>
int main(){
float  F , C ;
printf("The temperature of city(in degree Fahrenheit)\n");
scanf("%f",&F);
C = (F - 32)*5/9 ;
printf("The temperature in degree Celcius is %f", C);

return 0 ;
}