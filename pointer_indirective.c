#include <stdio.h>

int main() {
        int ary[3] = { 10,20,30 };
        int *ary_p;
        ary_p = ary;

        printf("間接参照\t=%d,%d,%d\n", *ary_p , *(ary_p + 1) , *(ary_p + 2));
        printf("添え字指定\t=%d,%d,%d" , ary[0] , ary[1] , ary[2]);
        return 0;
}
