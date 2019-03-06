/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:08:48 by rywisozk          #+#    #+#             */
/*   Updated: 2018/11/29 13:45:12 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	j;
	char	*str;

	str = (char*)src;
	x = ft_strlen(dst);
	j = ft_strlen(str);
	i = 0;
	if (size <= x)
		return (j + size);
	while (src[i] != '\0' && i < (size - x - 1))
	{
		dst[x + i] = src[i];
		i++;
	}
	dst[x + i] = '\0';
	return (x + j);
}
