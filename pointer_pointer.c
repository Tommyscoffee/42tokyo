#include <stdio.h>

int main() {
	char str[] = "kitty on your lap";
	char *str_p;
	char **str_pp;	/*ポインタのポインタ*/

	str_p = str;
	str_pp = &str_p;

	printf("文字型配列変数\n");
	printf("配列先頭アドレス = %x\n" , str);
	printf("保持する文字列 = %s\n\n" , str);

	printf("ポインタの示す値\n");
	printf("ポインタアドレス = %x\n" , &str_p);
	printf("保存する値 = %x\n" , str_p);
	printf("保持するアドレスが持つ内容 = %s\n\n" , str_p);

	printf("ポインタのポインタが示す値\n");
	printf("保持する値 = %x\n" , str_pp);
	printf("保持する値が持つ値 = %x\n" , *str_pp);
	printf("保持する値が持つ値の内容 = %s", *str_pp);

	return 0;
}
