/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:43:51 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/13 15:46:14 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char test1[10] = "abc12";
	char test2[10] = "abcde";

	printf("%d\n", ft_strncmp(test1, CHAR_MIN, 3));
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d¥n", CHAR_MIN);
// 	return 0;
// }
