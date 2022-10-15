#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buf[] = "ABCDDEFG";
    memmove(buf,buf,3);
    printf("コピー後のbuf文字列→%s\n",buf);
    return 0;
}