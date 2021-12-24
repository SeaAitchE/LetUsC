/* Consider a currency system in which there are notes of seven 
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. 
N. */

#include <stdio.h>
#include <math.h>
int main(){
int N ,x,y,z,x1,y1,z1,a,b,c,a1,b1,c1 ;
printf("Enter the amount of money\n");
scanf("%d", &N);
x = N/100 ;
x1 = N%100 ;
y = x1/50 ;
y1 = x1%50;
z = y1/10 ;
z1 = y1%10 ;
a = z1/5 ;
a1 = z1%5 ;
b = a1/2 ;
b1 = a1%2 ;
c = b1/1 ;
printf("We need %d 100 Rs. notes , %d 50 Rs. notes , %d 10 Rs. notes , %d 5 Rs. notes , %d 2 R. notes and %d 1 Rs. notes", x,y,z,a,b,c);







    return 0;
}