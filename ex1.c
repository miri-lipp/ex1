/******************
Name: Miriam Lipkovich
ID:
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  int num1, position, res =0, num2, res2 = 0, res3 = 0, answer = 0;
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%i", &num1);
  printf("Please enter a position:\n");
  scanf("%i", &position);
  res = num1 >> position;
  answer = 1 & res;
  printf("The bit in position %d of number %d is: %d", position, num1, answer);
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%i", &num1);
  printf("Please enter a position:\n");
  scanf("%i", &position);
  res = 1 << position;
  res2 = num1 | res;
  res3 = num1 & ~res;
  printf("Number with bit %d set to 1 is: %d\n",position, res2);
  printf("Number with bit %d set to 0 is: %d\n",position, res3);


  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%i", &num1);
  printf("Please enter a position:\n");
  scanf("%i", &position);
  res = 1 << position;
  answer = num1 ^ res;
  printf("Number with bit %d toggled: %d\n", position, answer);
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number: \n");
  scanf("%i", &num1);
  res = 1 & num1;
  printf("%d\n", res);
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal): \n");
  scanf("%o", &num1);
  printf("Please enter the second number (octal): \n");
  scanf("%o", &num2);
  res = (num1 ^ num2) << 1;
  printf("The sum in hexadecimal: %X\n", res);
  answer = (((res >> 3 & 1) >> 2 & 1) >> 2 & 1) >> 3 & 1;
  printf("The 3,5,7,11 bits are: %d\n", answer);
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  //printf("Bye!\n");
  
  return 0;
}
