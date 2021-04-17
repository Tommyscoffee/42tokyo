#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ans;

	i = 0;
	ans = (unsigned char)s1[i] - (unsigned char)s2[i];
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return (ans);
		i++;
	}
	return (0);
}

int main(void)
{

	char test1[10] = "abc12";
	char test2[10] = "abcde";



	//test1とtest2の文字列を先頭から5文字比較
	if(ft_strncmp(test1,test2,5)==0){
		puts("文字列は一致しています。");
	}else{
		puts("文字列は一致していません。");
	}


	//test1とtest2の文字列を先頭から３文字比較
	if(strncmp(test1,test2,3)==0){
		puts("文字列は一致しています。");
	}else{
		puts("文字列は一致していません。");
	}

	return 0;
}
