/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:25:18 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/04 16:30:48 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 1;
	if (n == 0)
		return (0);
	while (*str1 == *str2 && i <= n)
	{
		if (*str1 == *str2 && (i == n || *str2 == '\0'))
			return (0);
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}
