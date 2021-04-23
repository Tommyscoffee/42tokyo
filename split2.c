#include "test.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] ==c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static char	*make_str(const char *s, char c, int from, int delim)
{
	int		j;
	char	*new_str;

	j = 0;
	// printf("xxxxxxx\n");
	new_str = (char *)malloc(sizeof(char) * (delim - from + 2));
	if (!new_str)
		return (0);
	while (from < delim)
	{
		new_str[j] = s[from];
		from++;
		j++;
	}
	if (s[delim + 1] == '\0' && s[delim] != c)
	{
		new_str[j] = s[delim];
		new_str[j + 1] = '\0';
	}
	else
	{
		new_str[j] = '\0';
	}
	return (new_str);
}

void	ft_free_array(char **ans, int j)
{
	free(ans[j]);
}

static char	**ft_split_array(char **ans, char const *s, char c)
{
	int	delim;
	int	j;
	int	from;

	delim = -1;
	j = 0;
	from = 0;
	while (s[++delim])
	{
		if (s[delim] == c )
		{
			if (from == 0 && s[0] != c)
				ans[j] = make_str(s, c, from, delim);
			else
				ans[j] = make_str(s, c, from + 1, delim);
			if (!ans[j])
				ft_free_array(ans, j);	
			j++;
			from = delim;
		}
		if (s[delim] == c && s[delim - 1] == c)
			from = delim;
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
	count = count_words(s, c);
	ans = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ans)
		return (NULL);
	printf("%lu\n",sizeof(ans));
	return (ft_split_array(ans, s, c));
}

int	main()
{
	char s1[] = "AABBAABBAA";
    char s2 = 'B';
	// char	**ans;
	int i;
	char *string = "      split       this for   me  !       ";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char **ans = ft_split(string, ' ');

	// split_cmp_array(expected, result);

	i = 0;
	// ans = ft_split(s1,s2);
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