#include <stdio.h>
#include <stdlib.h>

// Clicking 'Open Declaration' should open config.h
#include "config.h"

int main(void) {
#if MACRO_FROM_C_INCLPATH_PRJ-0
	puts("!!!Hello World!!!" );
#endif
#if MACRO_FROM_COMMANDLINE-0
	puts("!!!Hello, hello World!!!" );
#endif
#if __GNUC__-0
	puts("!!!Hello, hello World!!!" );
#endif

return EXIT_SUCCESS;
}
