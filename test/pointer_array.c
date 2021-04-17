#include <stdio.h>

int main() {
        int get_n;
        char *ary[] = { "あーちゃん" , "のっち" , "かしゆか" };
        printf("どんな娘がお好み?\n");
        printf("セクシー = 1\nショートボブ = 2\n黒髪ロング = 3\n");
        printf("1～3の半角英数>");

        scanf("%d",&get_n);
        if (( get_n <= 3 ) && ( get_n >= 1))

                printf("あなたは%sさんが好きなのですね☆" , ary[get_n - 1]);
        else printf("不正な値です");

        return 0;
}
