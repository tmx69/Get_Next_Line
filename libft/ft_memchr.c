/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:43:38 by rywisozk          #+#    #+#             */
/*   Updated: 2018/11/29 11:14:00 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	j;
	unsigned char	*s1;

	j = (unsigned int)c;
	s1 = (unsigned char*)arr;
	i = 0;
	while (i < n)
	{
		if (*s1 == j)
			return (s1);
		s1++;
		i++;
	}
	return (NULL);
}
