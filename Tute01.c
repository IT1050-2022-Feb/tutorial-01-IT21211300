/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

float sub1Marks,sub2Marks, avrg;

  printf("input subject 1 : ");
  scanf("%f", &sub1Marks);

  printf("input subject 2 : ");
  scanf("%f", &sub2Marks);

 avrg = (sub1Marks + sub2Marks)/2.0;

 printf("Average = %.2f ", avrg); 
  
  return 0;
}

