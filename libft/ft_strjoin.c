/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:40:37 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/18 17:42:53 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*in;
	char	*out;

	if (!s1 || !s2)
		return (NULL);
	in = (char*)s2;
	out = (char*)s1;
	if (!(result = ft_strnew(ft_strlen(in) + ft_strlen(out))))
		return (NULL);
	ft_strcpy(result, out);
	if (ft_strcat(result, in))
		return (result);
	return (NULL);
}
