/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:22:37 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/04 19:43:46 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*s1;
	int		i;

	if ((char*)s)
	{
		i = 0;
		s1 = (char*)s;
		while (s1[i])
		{
			ft_putchar_fd(s1[i++], fd);
		}
	}
}
