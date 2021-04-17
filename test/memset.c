#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	char *s_chr_p;
	
	i = 0;
	s_chr_p = (char *)b;

	while (i < len)
	{
		*(s_chr_p + i) = (char)c;
		i++;
	}
	return (b);
}

int	main()
{
	char buf[] = "abcdefg";
	
	char *b_po;
	b_po = buf;

	memset(buf,'*',4);
	printf("%s\n",buf);
	return 0;
}
