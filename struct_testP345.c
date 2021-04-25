#include "test.h"

typedef struct
{
	char	name[255];
	int		age;
	int		sex;
}	profile;

void	input_struct(profile *data, int idx)
{

	printf("name %d人目\n", idx);
	scanf("%s",(*data).name);
	printf("age %d人目\n", idx);
	scanf("%d",&data->age);
	printf("sex 1:male 2:female %d人目\n", idx);
	scanf("%d",&(*data).sex);
}

void	output_struct(profile *data, int idx)
{
	printf("name %d人目 = %s\n", idx, (*data).name);
	printf("age %d人目 %d\n",idx, data->age);
	if (data->sex == 1)
		printf("male %d人目\n", idx);
	else
		printf("female　%d人目n", idx);

}

int	main()
{
	profile data[3];
	int	idx;

	idx = 0;
	while (idx < 3)
	{
		input_struct(&data[idx], idx + 1);
		idx++;
	}
	idx = 0;
	while (idx < 3)
	{
		output_struct(&data[idx], idx + 1);
		idx++;
	}
	return (0);

}