#include "libft.h"

char	*saiki(char *r_haystack, char *r_needle, size_t haystack_len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*r_haystack;
	char	*r_needle;
	size_t	haystack_len;

	haystack_len = len;
	r_haystack = (char *)haystack;
	r_needle = (char *)needle;
	if (!(*needle))
		return (r_haystack);
	while (!(haystack_len))
	{
		if (*r_haystack == *r_needle)
			return (saiki(r_haystack, r_needle, haystack_len));
		r_haystack++;
		haystack_len--;
	}
	return (NULL);
}

char	*saiki(char *r_haystack, char *r_needle, size_t haystack_len)
{
	if (*r_needle == '\0' || haystack_len == 0)
		return (r_haystack);
	if (*r_haystack == *r_needle)
	{
		while (*r_needle != '\0')
		{
			r_haystack++;
			r_needle++;
			haystack_len--;
			return (saiki(r_haystack, r_needle, haystack_len));
		}
	}
	else
		return (NULL);
}





int	main(void)
{
	char	*p = ft_strnstr( "abcde", "xy", 4 );
	printf("%c\n", *p);
}
