/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:23:54 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/05 18:30:01 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *source, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst1;

	src = (unsigned char*)source;
	dst1 = (unsigned char*)dst;
	if (dst1 > src)
	{
		while (n--)
			dst1[n] = src[n];
	}
	else if (src > dst1)
		ft_memcpy(dst1, src, n);
	return (dst1);
}
