#include <string.h>
#include <stdio.h>

// int main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	char buf_2[] = "ABCDsss";
// 	printf("%lu\n", strlcpy(buf, buf_2, 2));
// 	printf("%s\n", buf);
// }

int main(void)
{
	char *p;
	int a = 0;
	p = &a;
	*p = 1000;
	printf("%d\n", a);
}
