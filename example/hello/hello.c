#include <stdlib.h>
#include <stdio.h>

int
main(int argc, char *argv[])
{
	char *target = "World";

	if (argc > 1)
	{
		target = argv[1];
	}
	printf("Hello, %s!\n", target);

	return (EXIT_SUCCESS);
}
