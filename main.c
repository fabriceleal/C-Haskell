#include <stdio.h>


int to_call(void * arg)
{
	printf("C, Called from haskell\n");

	return 0xDEADBEAF;
}


int main(int argc, char* argv[])
{
	printf("Calling haskell, from C ...\n");

	
	return 0x0;
}
