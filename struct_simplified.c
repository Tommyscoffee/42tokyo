#include "test.h"
//this code create structure
struct student
{
	int	year;
	int	clas;
	int	number;
	char	name[64];
	double	stature;
	double	weight;
};
//the following code declare 'Structure type(構造体型)'
typedef struct student_tag student;

//more simple 'structure' and 'structure type' declaration
//this code can declare 'structure' and 'structure type' simultaneously
typedef struct student
{
	int	year;
	int	clas;
	int	number;
	char	name[64];
	double	stature;
	double	weight;
}	student;

//most simple 'structure' and 'structure type' declaration.
//this code can omit 'structure tag' cause it can already be replaced by a 'structure type'.
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
	printf('year = %d\n',data.year);
	printf('number = %d\n',data.number);//
}

int	main()
{
	student data;//this is struct variable declaration	

	data.year = 6;
	data.number = 24;

	print_struct_arguments(data);
	print_struct_arguments(data);
	return (0);

}