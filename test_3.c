#include <string.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char test1[10] = "abc12";
    char test2[10] = "abcde";

    // if(strncmp(test1,CHAR_MIN,3)==0){
    //     puts("文字列は一致しています。");
	// 	printf("%d\n", strncmp(test1,CHAR_MIN,-3));   //(s1, s2, n)
    // }else{
    //     puts("文字列は一致していません。");
	// 	printf("%d\n", strncmp(test1,CHAR_MIN,5));
    // }

	printf("%d\n", strncmp(test1,CHAR_MIN,3));   //(s1, s2, n)
    return 0;
}
