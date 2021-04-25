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
	printf("class = %d\n",data.clas);
	printf("number = %d\n",data.number);//
}

int	main()
{
	student data;
	student *data_ptr;//this is pointer valiable to struct;

	data_ptr = &data;
	(*data_ptr).clas = 3;// parenthesis is added according to Operater precedence.
	// data_ptr_clas = 3;these three have same meaning.
	// data[0].clas = 3;
	data_ptr->number = 24;//This is more simple notation of the above.
	print_struct_arguments(data);//As normal valiables we can do string munipulation using pointer on struct.
	return (0);
}