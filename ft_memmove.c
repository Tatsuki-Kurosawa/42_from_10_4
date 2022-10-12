/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:46:09 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/12 18:56:51 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_memmove_2(void *dest, const void *src, size_t n);

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	char	*str_dest;
// 	char	*str_src;
// 	char	*r_str_dest;
// 	char	*r_str_src;

// 	str_dest = (char *)dest;
// 	r_str_dest = (char *)dest;
// 	str_src = (char *)src;
// 	r_str_dest = (char *)dest;
// 	if (ft_strlen(str_dest) >= n)   // destの取得したメモリ領域をnが超えていないか確かめる.
// 	{
// 		while (*str_dest != '\0')
// 		{
// 			while (*str_src != '\0')
// 			{
// 				if (str_dest == str_src)
// 					ft_memmove_2(dest, src, n);
// 				str_src++;
// 			}
// 			str_dest++;
// 			*str_src = *r_str_src;
// 		}
// 		ft_memcpy(r_str_dest, r_str_dest, n);
// 	}
// }

// void	ft_memmove_2(void *dest, const void *src, size_t n)
// {
// 	char	*str_dest;
// 	char	*str_src;

// 	str_dest = (char *)dest;
// 	str_src = (char *)src;
// 	while (n != 0)
// 	{
// 		*str_dest = *str_src;
// 		str_dest++;
// 		str_src++;
// 		n--;
// 	}
// 	return ((void *)str_dest);
// }

// // int main(void)
// // {
// //     char buf[] = "ABCDDEFG";
// //     ft_memmove(buf+3,buf,3); //(dest, src, n)
// //     printf("コピー後のbuf文字列→%s\n",buf);
// //     return 0;
// // }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	if (src < dst)
	{
		while (len)
		{
			dst_ptr[len - 1] = src_ptr[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
			{
				dst_ptr[i] = src_ptr[i];
				i++;
			}
	}
	return (dst);
}


// src = abcdefg;
// dst = src + 2


// abcdefg
// src = abadefg
// dst = a

// abcdefg
// src = ababefg
// dst = ab

// abcdefg
// src = ababafg
// dst = aba

// abcdefg
// src = abababg
// dst = abab






