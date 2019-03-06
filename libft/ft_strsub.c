/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:10:40 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/07 18:42:32 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (!(s1 = (ft_strnew(len))))
		return (NULL);
	if (s1 == (ft_strncpy(s1, s + start, len)))
		return (s1);
	else
		return (NULL);
}
