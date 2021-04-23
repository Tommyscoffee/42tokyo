#include "test.h"

static int	isDelimiter(char const s, char delim)
{
	if (s == delim)
		return (1);
	else
		return (0);
}

static char	*make_str(const char *s, char c, int from, int i)
{
	int		j;
	char	*new_str;

	j = 0;
	printf("xxxxxxx\n");
	new_str = (char *)malloc(sizeof(char) * (i - from + 2));
	if (!new_str)
		return (0);
	while (from < i)
	{
		new_str[j] = s[from];
		from++;
		j++;
	}
	if (s[i + 1] == '\0' && s[i] != c)
	{
		new_str[j] = s[i];
		new_str[j + 1] = '\0';
	}
	else
	{
		new_str[j] = '\0';
	}
	return (new_str);
}

static char	**ft_split_array(char **ans, char const *s, char c)
{
	int	i;
	int	j;
	int	from;

	i = -1;
	j = 0;
	from = 0;
	while (s[++i])
	{
		if (isDelimiter(s[i], c))
		{
			if (from == 0 && s[0] != c)
				ans[j] = make_str(s, c, from, i);
			else
				ans[j] = make_str(s, c, from + 1, i);
			j++;
			from = i;
		}
		// if (s[i] == c && s[i - 1] == c)
		// 	from = i;
	}
	ans[j] = 0;
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int 	i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (isDelimiter(s[i], c))
			count++;
		i++;
	}
	ans = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ans)
		return (NULL);
	return (ft_split_array(ans, s, c));
}

int	main()
{
	char s1[] = "  AA  A  A  A ";
    char s2 = ' ';
	char	**ans;
	int i;

	i = 0;
	ans = ft_split(s1,s2);
	while (1)
	{
		printf("%s\n",ans[i]);
		if (ans[i] == 0)
			break;
		i++;
	}

	return 0;
    // if (!strcmp(ret, s2))
	//     printf("SUCCESS");
    // printf("FAILED");
}