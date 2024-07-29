#include <stdio.h>
// #include "pointer-sample.h"
// #include "static-runner.h"
// #include "useAssert.h"

// #include "readerStrings.h"
#include "mycalculator.h"
#include <assert.h>
int main() {
	// printPointers();
	// printPointers();

	// printf("first call on runner %d \n", runner());
	// printf("second call on runner %d \n", runner());
	// printf("#1 call on st runner %d\n", stRunner());
	// printf("#2 call on st runner %d\n", stRunner());
	// //useAssert();
	// //readFromConsole();

	// char textLine[10];
	// readStringFromConsole(textLine, 20); /// error
	// size_t len = sizeof(textLine) / sizeof(char);
	// assert(len != 10 && "array has wrong number of elemnts ");

	// readStringFromConsole(textLine, 20);   ///error
	// len = sizeof(textLine) / sizeof(char);
	// assert(len == 10 && "array has wrong number of elemnts ");
	unsigned int a=50, b=25;
	printf("my sum triple for %d, %d is %d\n", a, b, sumTriple(a, b) );
	a=1;
	b=3;
	printf("my sum triple for %d, %d is %d\n", a, b, sumTriple(a, b));

	printf("la subtactTriple per i valori %d, %d é %d\n", a, b, subtractTriple(a, b));
	assert(invertedSubtractTriple(1,1) == 0);
	assert(invertedSubtractTriple(a,b) == -2);
	printf("la invertedSubtractTriple per i valori %d, %d é %d\n", a, b, invertedSubtractTriple(a, b));

	return 0;
}
