/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:14:58 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/05 13:12:16 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_count(int *n, int *i, int *minus)
{
	if (*n < 0)
	{
		*n *= -1;
		*i = 2;
		*minus = -1;
	}
}

char			*ft_itoa(int n)
{
	int			i;
	int			n2;
	int			minus;
	char		*arr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 1;
	minus = 1;
	ft_count(&n, &i, &minus);
	n2 = n;
	while (n /= 10)
		i++;
	if (!(arr = ft_strnew(i)))
		return (NULL);
	while (i--)
	{
		arr[i] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	if (minus == -1)
		arr[0] = '-';
	return (arr);
}
