#include "test.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;
	size_t	c;

	c = 0;
	src_len = strlen(src);
	i = 0;
	if (src == 0)
		return (0);
	while (src[c] != '\0')
		c++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (c);
}

int	main()
{
	char	test1[] = "";
	char	test2[] = "abcdefg";

	// printf("%zu\n",strlcpy(test2,test1,0));
	printf("%zu\n",ft_strlcpy(test2,test1,0));
	printf("%s\n",test1);

	return 0;
}