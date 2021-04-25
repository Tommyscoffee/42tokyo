#include "test.h"

struct student
{
	int	year;
	int	clas;
	int	number;
	char	name[64];
	double	stature;
	double	weight;
};

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;

	while (src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	struct student data,data1,data2;
	char	test[10];
	strcpy(data.name,"MARIO");
	printf("%s\n",data.name);
	
	data1.year = 3;
	data1.clas = 2;
	data1.number = 24;
	ft_strcpy(data1.name,"TOM");
	data1.stature = 176.4;
	data1.weight = 73.3;

	data2 = data1;
	printf("year = %d\n",data2.year);
	printf("class = %d\n",data2.clas);
	printf("number = %d\n",data2.number);
	printf("name = %s\n",data2.name);
	printf("stature = %f\n",data2.stature);
	printf("weight = %f\n",data2.weight);
	return 0;
}