/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:44:04 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/05 16:01:17 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *source, int c, size_t n)
{
	unsigned char				*temp;
	unsigned char				*s2;
	size_t						i;

	i = 0;
	temp = (unsigned char*)dst;
	s2 = (unsigned char*)source;
	if (s2 == temp || n == 0)
		return (NULL);
	while (i < n)
	{
		temp[i] = *s2;
		if (*s2 == (unsigned char)c)
		{
			return (temp + i + 1);
		}
		i++;
		s2++;
	}
	return (NULL);
}
