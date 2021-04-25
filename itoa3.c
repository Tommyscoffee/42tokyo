#include "test.h"

static char	*libft_make_num(int minus_flag, int limit_flag, char *num)
{
	if (minus_flag)
		num[0] = '-';
	if (limit_flag)
		num[1] = '2';
	return (num);
}

static int	libft_length_return(int i)
{
	int	length;

	length = 0;
	while (i)
	{
		i /= 10;
		length++;
	}
	return (length);
}

static char	*libft_zero_return(char *num)
{
	num = (char *)malloc(2 * sizeof(char));
	if (!num)
		return (NULL);
	num[0] = '0';
	num[1] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		minus_flag;
	int		limit_flag;
	int		length;

	n = libft_n_check(n, &limit_flag, &minus_flag, &i);
	length = libft_length_return(i);
	num = malloc((length + minus_flag + limit_flag + 1) * sizeof(char));
	if (n == 0)
		return (libft_zero_return(num));
	if (!num)
		return (NULL);
	num[length-- + minus_flag + limit_flag] = '\0';
	num = libft_make_num(minus_flag, limit_flag, num);
	i = -1;
	while (length > i)
	{
		num[length - (++i - minus_flag - limit_flag)] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (num);
}