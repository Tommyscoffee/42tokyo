#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	test1[] = "ABCDEFG";
	char	test2[] = "abcdefg";
	int i = 0;

	while (i < strlen(test1))
	{
		test1[i++] = test2[i];
	}
	printf("%s\n",test1);
	return 0;

}