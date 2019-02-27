#include <stdio.h>  /* printf, scanf, NULL, basic math */
#include <math.h>   /* trig and power functions comes from here */
#include <stdlib.h> /* srand, rand */
#include <time.h>  /* time */

#define PI 3.14159265

int main (void) {

	//Standard input-output library functions
    
	int a, b, x, y, z;
	float w;
	
	//Ask the user for the numbers
	printf("Enter numbers for a and b, seperated by a space \n");

	//Store the input values of a and b
	scanf("%d%d", &a, &b);
	w = a / b; //Division
	x = a + b; //Addition
	y = a - b; //Subtraction
	z = a * b; //Multiplication
	
	//Show the values after the operations
    printf("\n Basic math \n");
	printf("a / b = %f,\n a + b = %d,\n a - b = %d,\n ab = %d", w, x, y, z);

	//Math library functions
	w = cos((a / b)*PI); //cosine
	x = sin((--a + b)*PI); //sine
	y = tan((b*PI)/a); //tangent
	z = pow(b, a); //exponent
	
	//Show the values after the operations
    printf("\n\nSome trig");
	printf("\ncos(a/b)= %f,\n sin((one less than a)+b) = %d,\n tan((b*pi)/a) = %d,\n b^a = %d\n", w, x, y, z);

/*StdLib functions. As far as I know, adds RNG capabilities.
 * Time then is needed to make a new number each time it starts.
 * This part I'm not completely certain about but it's kind of cool.
 */

  // initialize random seed: 
  srand (time(NULL));

  // generate number between 1 and 10:
	int o, q, r, s, t;
	o = (rand() % 10 + 1);
	q = (rand() % 10 + 1) + w;
	r = (rand() % 10 + 1) + x;
	s = (rand() % 10 + 1) + y;
	t = (rand() % 10 + 1) + z;
	
	printf("\n Let o = %d be a random value between 1 and 10. \n Then  q = o + w = %d, \n r = o + x = %d, \n s = o + y = %d, \n t = o + z = %d", o, q, r, s, t);
	

return 0;
}
