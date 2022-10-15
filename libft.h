/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:40:47 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/10/13 15:40:32 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
	#include <stdio.h>
	#include <limits.h>

	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	size_t	ft_strlen(const char *s);
	void	*ft_memset(void *s, int c, size_t n);
	void	ft_bzero(void *s, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t n);
	size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
	int	ft_toupper(int c);
	int	ft_tolower(int c);
	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	void	*ft_memchr(const void *s, int c, size_t n);
	int	ft_memcmp(const void *s1, const void *s2, size_t n);
#endif