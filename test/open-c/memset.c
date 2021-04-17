#include <stdio.h>
#include <string.h>
/*https://programming-place.net/ppp/contents/c/034.html*/
int main(void)
{
    struct Point{
        int x,y;
    };

    int a[5];
    struct Point pos;
    int v;

    memset(a,0,sizeof(a));
    memset(&pos,0,sizeof(pos));
    memset(&v,0xff,sizeof(v));

    for(int i = 0;i < 5;++i){
        printf("%d",a[i]);
    }
    printf("\n");
    printf("%d%d\n",pos.x,pos.y);
    printf("%d\n",v);
    return 0;
}