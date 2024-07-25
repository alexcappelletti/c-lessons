#include "useAssert.h"
#include "stdio.h"

void useAssert(){
	int a = 5, b = 3;
	assert((a + b) > 5 && "Sum is not greater than 5");
	printf("Assertion passed!\n");
	assert((a + b) < 5 && "Sum is not greater than 5");
	
}
