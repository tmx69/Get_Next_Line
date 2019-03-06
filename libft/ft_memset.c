/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:03:12 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/13 16:56:10 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned int	k;

	temp = (unsigned char*)dest;
	k = (unsigned int)c;
	i = 0;
	while (i < n)
	{
		temp[i++] = k;
	}
	return (temp);
}
