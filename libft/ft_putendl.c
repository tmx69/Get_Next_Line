/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:34:33 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/04 19:47:08 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = (char*)s;
	if (s1)
	{
		while (s1[i])
		{
			ft_putchar(s1[i++]);
		}
		ft_putchar('\n');
	}
}
