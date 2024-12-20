/******************
Name:
ID: 
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  int num1, position, num2, res =0, res2 = 0, res3 = 0, answer = 0;
  int const mask = 1;
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%i", &num1);
  printf("Please enter a position:\n");
  scanf("%i", &position);
  res = num1 >> position;
  answer = mask & res;
  printf("The bit in position %d of number %d is: %d", position, num1, answer);
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%i", &num1);
  printf("Please enter a position:\n");
  scanf("%i", &position);
  res = mask << position;
  res2 = num1 | res;
  res3 = num1 & ~res;
  printf("Number with bit %d set to 1: %d\n",position, res2);
  printf("Number with bit %d set to 0: %d\n",position, res3);


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
  res = mask << position;
  answer = num1 ^ res;
  printf("Number with bit %d toggled: %d\n", position, answer);
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number: \n");
  scanf("%i", &num1);
  res = mask & ~num1;
  printf("%d\n", res);
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  int first = 3, second = 5, third = 7, fourth = 11;
  int ans1, ans2, ans3, ans4;
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal): \n");
  scanf("%o", &num1);
  printf("Please enter the second number (octal): \n");
  scanf("%o", &num2);
  res = num1 + num2;
  printf("The sum in hexadecimal: %X\n", res);
  ans1 = res >> first & mask;
  ans2 = res >> second & mask;
  ans3 = res >> third & mask;
  ans4 = res >> fourth & mask;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", ans1, ans2, ans3, ans4);
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
