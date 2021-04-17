#include <stdio.h>

int main(void)
{
    int i = 0;
    char    c   = 'a';

    void *p1 = &i;
    void *p2 = &c;

    int *pi = p1;
    char *pc = p2;

    *pi = 100;
    *pc = 'x';
    printf("%d%c\n",*pi,*pc);
    return 0;
}