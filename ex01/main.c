#include <HsFFI.h>

#ifdef __GLASGOW_HASKELL__

// TODO: Explain this
	#include "fibo_stub.h"
	extern void __stginit_Safe(void);

#endif

#include <stdio.h>


int main(int argc, char* argv[])
{
	int i;

	// TODO: Explain this
	hs_init(&argc, &argv);

	#ifdef __GLASGOW_HASKELL__

	// TODO: Explain this
	hs_add_root(__stginit_Safe);

	#endif

	i = fibonacci_hs(42);
	printf("Fibonacci: %d\n", i);

	// TODO: Explain this
	hs_exit();
	
	return 0x0;
}
