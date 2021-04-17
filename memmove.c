#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_chr;
	char	*src_chr;
	char	*limit_max;
	char	*limit_min;

	dst_chr = (char *)dst;
	src_chr = (char *)src;
	limit_max = src_chr + len;
	limit_min = src_chr;
	if (len != 0)
	{
		if (dst_chr < src_chr)
			while (src_chr != limit_max)
				*dst_chr++ = *src_chr++;
		dst_chr += len;
		src_chr += len;
		while (src_chr != limit_min)
		{
			*--dst_chr = *--src_chr;
		}
	}
	return (dst);
}


int	main()
{
	char test[] = "ABCDEFG";
	char test2[] = "DDDDDDDD";
	
	printf("%p\n",test);
	printf("%p\n",test2);
	ft_memmove(test,test2,4);
	
	printf("%s\n",test);

	char	str[] = "0123456789";
	printf("before:%s\n",str);

	memmove((str+1),str,3);
	printf("%s\n",str);

	return 0;
}
