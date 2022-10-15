/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:43:51 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/15 19:40:19 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;

	while (i < n && s1[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char test1[10] = "abc12";
// 	char test2[10] = "abcde";

// 	printf("%d\n", ft_strncmp(test1, test2, 4));
// }

// int main(int argc, char const *argv[])
// {
// 	printf("%d¥n", CHAR_MIN);
// 	return 0;
// }
// #include<string.h>
// #
// // int main()
// {
// 	printf("%d",strncmp("asafr",NULL,2));
// 	// printf("%d",ft_strncmp("asafr",NULL,2));
// 	return 0;

// }