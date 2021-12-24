/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance in 
meters, feet, inches and centimeters*/

#include <stdio.h>
int main(){
float _distance , m , _feet , _inch , _cm ;
printf("Distance between cities(in km.)\n");
scanf("%f", &_distance);
m = 1000*_distance;
_feet = 3.28084*m;
_inch = 39.3701*m;
_cm = 100*m;
printf("\nthe distance between cities(in meters) = ");
printf("%f", m);
printf("\nthe distance between cities(in feets) = ");
printf("%f", _feet);
printf("\nthe distance between cities(in inches) = ");
printf("%f", _inch);
printf("\nthe distance between cities(in centimeters) = ");
printf("%f", _cm);

return 0;
}