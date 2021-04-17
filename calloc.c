#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s_chr_p;

	i = 0;
	s_chr_p = (char *)s;
	while (i < n)
	{
		*(s_chr_p + i) = 0;
		i++;
	}
}
void	*calloc(size_t count, size_t size)
{
	size_t	n;
	void	*ans;

	n = count * size;
	ans = malloc(n);
	if (ans != 0)
		ft_bzero(ans, n);
	return (ans);
}
int main(void)
{
   int *ptr,*p;
   int i;

   /* 500個のintサイズのメモリを確保 */
   ptr = (int *)ft_calloc(500,sizeof(int));
   if(ptr == NULL) {
      printf("メモリが確保できません\n");
      exit(EXIT_FAILURE);
   }

   p = ptr;
   for (i=0; i<500; i++) {
      printf("%d ",*p);
      p++;
   }

   /* メモリの開放 */
   free(ptr);

   return 0;
}

