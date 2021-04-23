#include "test.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i ++;
	}
	return (words);
}

static int	words_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char	**make_str(char const *s, int ans_count, char c, char **ans)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (++i < ans_count)
	{
		while (*s == c)
			s++;
		len = words_len(s, c);
		ans[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!ans[i])
			return (NULL);
		j = 0;
		while (j < len)
			ans[i][j++] = *s++;
		ans[i][j] = '\0';
	}
	ans[i] = NULL;
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		ans_count;

	// if(!s) notprotectにするため削除
	// 	return (NULL);
	ans_count = count_words(s, c);
	ans = (char **)malloc(sizeof(char *) * (ans_count + 1));
	if (!ans)
		return  (NULL);
	ans= make_str(s, ans_count, c, ans);
	return (ans);
}
int	main()
{
	char s1[] = "AABBAABBAA";
    char s2 = 'B';
	// char	**ans;
	int i;
	char *string = "      split       this for   me  !       ";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char **ans = ft_split(s1, s2);

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