#include        <stdio.h>
#include        <string.h>

int	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	void *ans;

	while (n-- != 0)
	{
		ans = (unsigned char *)s1++ - (unsigned char *)s2++;
		if (ans != 0)
			return (ans);
	}
	return (0);
}

int main(void)
{
        char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
        char buf2[] = "\0abc\0de";
        char buf3[] = "\0abcdef";
        
        if (ft_memcmp(buf1, buf2, 7) == 0)
                printf("buf1 = buf2\n");
        else
                printf("buf1 != buf2\n");

        if (ft_memcmp(buf1, buf3, 7) == 0)
                printf("buf1 = buf3\n");
        else
                printf("buf1 != buf3\n");

        return 0;
}
