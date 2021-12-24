/*Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary.*/

#include <stdio.h>
int main(){
float salary, house_rent , da , gross_salary ;
printf("eNTER THE SALARY OF RAMESH\n");
scanf("%f", &salary);
da = 0.4*salary ;
house_rent = 0.2*salary ;
gross_salary = house_rent + da + salary ;
printf("Ramesh's gross salary is = ");
printf("%f", gross_salary);

return 0;
}