#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dst_chr;
	char *src_chr;

	dst_chr = (char *)dst;
	src_chr = (const char *)src;

	while (n-- > 0)
	{
		*(dst_chr++) = *(src_chr++);
	}
	return (dst);
}

int	main()
{
	char test[] = "ABCDEFG";
	char test2[] = "DDDDDDDD";
	ft_memcpy(test,test2,4);
	
	printf("%s\n",test);

	return 0;
}
