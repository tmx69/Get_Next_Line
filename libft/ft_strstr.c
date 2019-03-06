/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:22:40 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/04 16:43:29 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		b;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		j = 0;
		if (s1[i] == s2[j] && s2[j] != '\0')
		{
			b = i;
			while (s1[b] == s2[j] && s2[j] != '\0')
			{
				if (s2[j + 1] == '\0' && s1[b] == s2[j])
					return ((char*)s1 + (b - j));
				b++;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
