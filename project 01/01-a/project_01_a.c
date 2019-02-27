/* 
* Name: Jevon Morris
* N00857742
* Assignment #2 
*/

#include <stdio.h>

int main (void)
{
	int a, b, x, y, z;
	float w;
	
	//Ask the user for the numbers
	printf("Enter numbers for a and b, \n seperated by a space \n");

	//Store the input values of a and b
	scanf("%d%d", &a, &b);

	w = a / b; //Division
	x = a + b; //Addition
	y = a - b; //Subtraction
	z = a * b; //Multiplication
	
	//Show the values after the operations
	printf("a / b = %f,\n a + b = %d,\n a - b = %d,\n ab = %d", w, x, y, z);

   	
	return 0;
}
