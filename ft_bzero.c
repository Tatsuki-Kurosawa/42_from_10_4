/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:09:53 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/11 22:23:37 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n != 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}

// int main(void)
// {
//     char buf[] = "ABCDEFGHIJK";
//     ft_bzero(buf+3, 1);
//     for (int i = 0; i < 11; i++)
//     {
//         printf("buf文字列→%c\n",buf[i]);
//     }
//     return 0;
// }
