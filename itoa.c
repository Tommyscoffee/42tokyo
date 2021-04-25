#include "test.h"

char	*ft_ita(int c)
{
	int		top_rank;
	int		count;
	char	*ans;

	top_rank = 0;
	count = 0;
	if (c < 0)
	{
		//マイナスのとき
	}
	if (c >= 10)
	{
		ft_itoa(c / 10);
		ft_itoa(c % 10);
		ans[count++] = c;
	}
	return (*ans);ß
}

int	main()
{

}