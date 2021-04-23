#include "test.h"

int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	ans;

	sign = 1;
	ans = 0;
	i = ft_isspace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		ans = ans * 10 + str[i] - '0';
		if (ans > LONG_MAX && sign == 1)
			return (-1);
		if (ans - 1 > LONG_MAX && sign == -1)
			return (0);
		i++;
	}
	return ((int)ans * sign);
}

int	main()
{
	char n[40] = "99999999999999999999999999";
        int i1 = atoi (n);
        int i2 = ft_atoi(n);

        if (i1 == i2)
                printf("TEST_SUCCESS");
        printf("TEST_KO");
		printf("%d",i2);
}