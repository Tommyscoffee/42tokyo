#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int 	j;
	size_t	s1_len;
	size_t	set_len;
	size_t	start;
	char	*ans;

	s1_len = strlen(s1);
	set_len = strlen(set);
	i = 0;
	j = 0;
	while (i < s1_len)
	{
		if (s1[i] == set[i])
			start++;
		i++;
	}
	ans = (char *)s1[i];
	return (ans);
}