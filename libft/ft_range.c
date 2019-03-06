/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:22:28 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/10 14:22:58 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
