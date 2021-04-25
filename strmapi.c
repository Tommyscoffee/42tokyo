#include "test.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	if (!new_s)
		return (0);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

int	main()
{
	char	*b = "override this !";
	char	*ans = "this is new string";
	char	b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = ft_strmapi(&ans[i], b[i]);
	
	printf("%s\n",b2);
	return 0;
}