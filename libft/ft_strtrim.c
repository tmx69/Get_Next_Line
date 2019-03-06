/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:55:37 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/04 18:31:20 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	char	*s1;
	int		i;
	int		j;
	int		n;

	if (!s)
		return (0);
	i = 0;
	n = 0;
	s1 = (char*)s;
	j = ft_strlen(s1);
	while (s1[i] == '\n' || s1[i] == '\t' || s1[i] == ' ')
		i++;
	if (s1[i] != '\0')
	{
		while (s1[j] == '\n' || s1[j] == '\t' || s1[j] == ' ' || s1[j] == '\0')
			j--;
	}
	if (!(result = ft_strnew(j - i + 1)))
		return (NULL);
	while (i < j + 1)
		result[n++] = s1[i++];
	return (result);
}
