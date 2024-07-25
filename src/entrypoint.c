#include <stdio.h>
#include "pointer-sample.h"
#include "static-runner.h"
#include "useAssert.h"

#include "readerStrings.h"

#include <assert.h>
int main() {
	printPointers();
	printPointers();

	printf("first call on runner %d \n", runner());
	printf("second call on runner %d \n", runner());
	printf("#1 call on st runner %d\n", stRunner());
	printf("#2 call on st runner %d\n", stRunner());
	//useAssert();
	//readFromConsole();

	char textLine[10];
	readStringFromConsole(textLine, 20); /// error
	size_t len = sizeof(textLine) / sizeof(char);
	assert(len != 10 && "array has wrong number of elemnts ");

	readStringFromConsole(textLine, 20);   ///error
	len = sizeof(textLine) / sizeof(char);
	assert(len == 10 && "array has wrong number of elemnts ");

	

	return 0;
}
