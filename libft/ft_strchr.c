/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:38:46 by rywisozk          #+#    #+#             */
/*   Updated: 2018/11/28 18:24:21 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int ch)
{
	char	*s1;
	int		i;
	int		j;

	j = 0;
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
			j = i;
		}
		i--;
	}
	if (s1[j] == ch)
		return (s1 + j);
	return (NULL);
}
