/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:26:51 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/04 19:44:14 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*s1;
	int		i;

	s1 = (char*)s;
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			ft_putchar_fd(s1[i++], fd);
		}
		ft_putchar_fd('\n', fd);
	}
}
