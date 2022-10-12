/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:38:34 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/12 12:43:53 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str_dest;
	char	*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;
	while (n != 0)
	{
		*str_dest = *str_src;
		str_dest++;
		str_src++;
		n--;
	}
	return ((void *)str_dest);
}

// int main(void)
// {
//     char buf[] = "ABCDDEFG";
//     char buf2[] = "123456789";
//     ft_memcpy(buf,buf2,3);
//     printf("コピー後のbuf文字列→%s\n",buf);
//     return 0;
// }
