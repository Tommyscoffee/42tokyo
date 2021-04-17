#include <stdio.h>

int main()
{
        int ary[2] = { 1000 , 2000 };
        int *po;

        po = &ary[0];
        (*po)++;
        printf("%d", ary[0]);

        return 0;
}
