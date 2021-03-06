#include <stdio.h>
#include <string.h>
void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned char	*dst_chr;
	unsigned char	*src_chr;
	unsigned char	c_chr;

	dst_chr = (unsigned char *)dst;
	src_chr = (unsigned char *)src;
	c_chr = (unsigned char)c;
	while (n-- > 0)
	{
		if (*src_chr == c_chr)
		{
			*(dst_chr)++ = *src_chr;
			return ((void *)dst_chr);
		}
		*(dst_chr)++ = *(src_chr)++;
	}
	return (NULL);
}
int	main()
{
	char test[] = "ABCDEFG";
	char test2[] = "abcdefg";
	printf("%x\n",test);
	char *po = memccpy(test,test2,'d',7);
	printf("%x\n",po);
	printf("%s\n",test);

	return 0;
}
