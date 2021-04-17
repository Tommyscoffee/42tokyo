#include <stdio.h>

int main() {
        char *str = "kitty on your lap";

        printf("先頭アドレス = %c\n",*str);
        printf("格納文字列 = %s\n" , str);
	
	char *str2 = "YUKI \0 RENA \0 MIMI";
        printf("%s\n%s\n%s" , str2 , str2 + 7 , str2 + 14);
        return 0;
}
