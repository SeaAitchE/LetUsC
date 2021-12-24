/* Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half parallel to its 
shorter sides. Thus paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8. */
#include  <stdio.h>
int main(){
float L , B;
L = 1189;
B = 841;
printf("The length and breadth of A0 is %f and %f", L ,B);
printf("\nThe length and breadth of A1 is %f and %f",  B , L/2);
printf("\nThe length and breadth of A2 is %f and %f", L/2 , B/2);
printf("\nThe length and breadth of A3 is %f and %f", B/2 , L/4);
printf("\nThe length and breadth of A4 is %f and %f", L/4 , B/4);
printf("\nThe length and breadth of A5 is %f and %f", B/4 ,L/8);
printf("\nThe length and breadth of A6 is %f and %f", L/8 , B/8);
printf("\nThe length and breadth of A7 is %f and %f", B/8 , L/16);
printf("\nThe length and breadth of A8 is %f and %f", L/16 , B/16);







 return 0;
}