/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:04:55 by rywisozk          #+#    #+#             */
/*   Updated: 2018/11/28 18:24:23 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s1;
	int		i;

	s1 = (char *)str;
	i = 0;
	while (s1[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s1[i] == ch)
		{
			return (s1 + i);
		}
		i--;
	}
	return (NULL);
}
