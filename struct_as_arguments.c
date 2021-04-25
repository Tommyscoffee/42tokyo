#include "test.h"
typedef struct
{
	int	year;
	int	clas;
	int	number;
	char	name[64];
	double	stature;
	double	weight;	
}	student;

void print_struct_arguments(student data)//we can use struct as argument. 
{
	printf("year = %d\n",data.year);
	printf("number = %d\n",data.number);//
}

int	main()
{
	student data;//this is struct variable declaration	

	data.year = 6;
	data.number = 24;

	print_struct_arguments(data);//we just pass a structure variable as a actual argumet.
	// print_struct_arguments(data);//no need to specify variables in a structure.
	return (0);

}