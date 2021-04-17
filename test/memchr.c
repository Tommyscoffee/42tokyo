#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s_char = s;
	const char c_char = c;
	int i;

	i = 0;
	while (i < n)
	{
		if (*(s_char + i) == c)
			return ((void *)(s_char + i));
		i++;
	}
	return (NULL); 
}

int	main()
{
	char buf[] = "ABCD5EFGH";
	char *ch;
	ch = (char*)ft_memchr(buf,'1',sizeof(buf));
	if(ch != NULL){
		printf("検索文字から表示→%s\n",ch);
	}else{
		puts("検索文字が見つかりませんでした。");
	}
	return 0;
}
