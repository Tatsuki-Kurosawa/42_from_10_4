/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:28:19 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/12 12:45:56 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	if (n <= 0)
		return (0);
	else
	{
		while (n != 0)
		{
			*str = c;
			s++;
			n--;
		}
		return (s);
	}
}

// int main(void)
// {
//     char buf[] = "ABCDEFGHIJK";
//     ft_memset(buf+3, 1, 0);
//     printf("buf文字列→%s\n",buf);
//     return 0;
// }
