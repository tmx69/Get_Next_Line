/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:59:22 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/13 17:04:17 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *temp;

	if (size == (size_t)(-1))
		return (NULL);
	if (!(temp = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(temp, '\0', size + 1);
	return (temp);
}
