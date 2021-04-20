#include "test.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	idx;
	size_t	i;

	idx = (size_t)start;
	ans = malloc(len + 1);
	i = 0;
	if (ans == 0)
		return (NULL);
	while (i < len)
	{
		if (idx <= strlen(s))
			ans[i] = s[idx];
		idx++;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

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
	ans = (char *)s1[start];
	return (ans);
}

char	*ft_strtrim2(char const *s1, char const *set)
{
	size_t	idx;
	size_t	end_idx;
	size_t	len;

	idx = 0;
	if (*s1 * *set == 0)
		return (0);
	end_idx = strlen(s1) - 1;
	while (strchr(set, s1[idx]))
		idx++;
	while (strchr(set, s1[end_idx]))
		end_idx--;
	len = end_idx - idx + 1;
	return (ft_substr(s1, idx, len));
}

int	main()
{
	char s1[100] = "ABCxAABBCCxBAC";
	char *s2 = "ABC";
	char	ans[10] = {};

	printf("'%s'の両側の空白を取り除くと、", s1);


	printf("'%s'となる.\n", ft_strtrim2(s1,s2));
}