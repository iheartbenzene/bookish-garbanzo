#include <stdio.h>
#include <string.h>

void myFxn;
int main(){

int array[10];
   //Pointers
			scanf("%d", &array[0]); //Ends up doubling the memory usage

			myFxn(array); //Gives the memory address of the array instead of actually giving the array itself

int* c=(int*)malloc(sizeof(int)); //asks the OS for memory
*c=10; //de-references the pointer to set the value to 10

int x=10;
printf("%d", *c); //prints the value of the allocated memory to the screen

free(c);
c= &x;

char* namep="Homer"; //character pointer
char name[50]; //character array
scanf("%s", &name);


			return 0;
}

void myFxn(){

 return;
}