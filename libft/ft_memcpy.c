/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:39:25 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/07 18:26:33 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *out, const void *in, size_t n)
{
	size_t		i;
	char		*temp;
	char		*k;

	temp = (char *)out;
	k = (char *)in;
	i = 0;
	if (in == out)
		return (out);
	while (i < n)
	{
		temp[i] = *k;
		i++;
		k++;
	}
	return (temp);
}
