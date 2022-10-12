/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:40:47 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/12 17:16:23 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
	#include <stdio.h>

	int	ft_isalnum(int c);
	int	ft_isascii(int c);

	int	ft_isprint(int c);
	int	ft_strlen(const char *s);
	void	*ft_memset(void *s, int c, size_t n);
	void	ft_bzero(void *s, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*memmove(void *dest, const void *src, size_t n);
	size_t	strlcpy(char *dst, const char *src, size_t dstsize);
#endif
