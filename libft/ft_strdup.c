/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:49:03 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/07 18:43:22 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s1;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (!(s1 = (char*)malloc(sizeof(*s1) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
