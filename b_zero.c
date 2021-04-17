#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char *s_chr_p;
	
	i = 0;
	s_chr_p = (char *)s;

	while ( i < n)
	{
		*(s_chr_p + i) = 0;
		i++;
	}
}

int	main()
{
	char buf[] = "ABCD5EFGH";
	char *ch;
	int i = 0;
	printf("%d\n",strlen(buf));
	ft_bzero(buf,5);
	while (i < 10)
	{
		printf("%c",*(buf + i));
		i++;
	}
	return 0;
}
