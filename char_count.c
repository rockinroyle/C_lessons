#include <stdio.h>

/* count characters in input; ver1 */
main()
{
	long nc;
	
	nc=0;
	while (getchar() != EOF)
		++nc;
	printf("%1d\n", nc);
}
