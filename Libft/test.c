#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char T1[]="ilyas";
	char T2[]="Nmili";

	printf("%zu\n",strlcpy(T1,T2,7));
	printf("%s\n",T1);
	printf("%s",T2);
	return (0);
}

