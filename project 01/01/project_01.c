#include <stdio.h>  /* printf, scanf, NULL, basic math */


void cmds();
void sum();
void diff();
void prod();
void quot();

int main ()
{
	char qqq=0, add=0, prd=0, sub=0, div=0;
	
while (){
	if (qqq == add){
		sum();
	} else if (qqq == prd){
		prod();
	} else if (qqq == sub){
		diff();
	} else if (qqq == div){
		quot();
	} else {printf("Goodbye");}
}
	return 0;
}

void cmds(){
	printf("Type sum, diff, prod, or quot, to access any of the basic math functions");

return;
}

void sum(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("%d + %d = %d", a, b, c);
return;	
}

void diff(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = b - a;
	printf("%d - %d = %d", b, a, c);
return;
}

void prod(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a * b;
	printf("%d * %d = %d", a, b, c);
return;
}

void quot(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a/b;
	printf("%d / %d = %d", a, b, c);
return;
} 
