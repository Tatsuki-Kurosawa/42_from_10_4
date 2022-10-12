#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(void)
{
    char buf[] = "ABCDDEFG";
	char buf_2[] = "ABCDE";
    memmove(buf_2+1,buf,5); //(dest, src, n)
	printf("コピー後のbuf_2文字列→%s\n",buf_2);
	for (int i = 0; i < 6; i++)
	{
		printf("%c\n", buf_2[i]);
	}
	// 4にするとヌル文字があって改行されていることがわかり、5にするとヌル文字がおされて表示されず、改行されている様子がわかる.
	
    return 0;
}
