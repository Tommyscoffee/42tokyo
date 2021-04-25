#include "test.h"

static long	getlen(long n)
{
	long	flag;
	long	len;

	flag = 0;
	len = 1;
	if (n < 0)
	{
		flag = 1;
		n = -n;
	}
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len + flag);
}

static char	*putans(char *str, long n, long len)
{
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len] = '0' + (n % 10);
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*ans;
	long	len;

	n = (long)n;
	str = malloc(sizeof(char) * (getlen(n) + 1));
	if (!str)
		return (NULL);
	len = getlen(n);
	str[len--] = '\0';
	ans = putans(str, n, len);
	return (ans);
}

int	main()
{
	char *test;

	test = ft_itoa(12345);
	printf("%s\n",test);
	return 0;
}