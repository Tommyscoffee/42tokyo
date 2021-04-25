#include "test.h"

static int	ft_abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}

static int	ft_intlen(int c)
{
	int	count;

	count = 0;
	if (c >= 10)
	{
		ft_intlen(c / 10);
		ft_intlen(c % 10);
		count++;
	}
	return (count);
}

char	*ft_itoa(int c)
{
	int	sign;
	int	len;
	char	*ans;

	sign = c < 0 ? 1 : 0;
	len = ft_intlen(ft_abs(c)) + sign;
	ans = (char *)malloc(sizeof(char) * len + 1);
	if (ans == 0
		return (NULL);
	ans[len] = '\0';
	while (--len > sign)
	{
		ans[len] = ft_abs(c % 10) + '0';
		c /= 10;
	}
	if (len == 0)
		ans[len] = '-';
	return (ans);
}