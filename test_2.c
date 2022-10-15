#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     char* p = strnstr( "abcde", "bc", 4);
//     puts( p );
// }

int main(void)
{
	char	*p = strnstr( "abbcde", "cd", 1);
	puts(p);
}

// int example(int, int);

// int main(void)
// {
// 	int num_1, num_2;
// 	int r_haystack, haystack_len;

// 	r_haystack = 3;
// 	haystack_len = 2;
// 	num_1 = r_haystack * haystack_len;
// 	// num_2 = example(r_haystack++, haystack_len--);
// 	num_2 = example(++r_haystack, --haystack_len);
// 	printf("%s, %d\n", "予想：6", num_1);
// 	printf("%s, %d\n", "予想：4", num_2);
// 	return 0;
// }

// int example(r_haystack, haystack_len)
// {
// 	printf("%d\n",r_haystack);
// 	printf("%d\n",haystack_len);
// 	return (r_haystack * haystack_len);
// }
