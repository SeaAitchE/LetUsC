/* If the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student 
in each subject is 100. */
#include <stdio.h>
int main(){
 float MM , _physics , _maths , _eng , _hindi , _comp , marks_ob , p;
 printf("The marks obtained in following subjects\n");
 printf("Maths = ", _maths);
 scanf("%f", &_maths ); 
 printf("English = ", _eng);
 scanf("%f", &_eng);
 printf("Physics = ", _physics);
 scanf("%f", &_physics);
 printf("Hindi = ", _hindi);
 scanf("%f", &_hindi);
 printf("Computers = ", _comp);
 scanf("%f", &_comp);
 MM = 500 ;
 marks_ob = _physics + _maths + _eng + _hindi + _comp ;
p = (marks_ob/MM)*100 ;
printf("\nAggregate Marks = ");
printf("%f", marks_ob);
printf("\nPercentage = ");
printf("%f", p);
   return 0;
}