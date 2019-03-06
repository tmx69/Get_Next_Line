/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:51:09 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/10 15:07:57 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char *s1, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != c && (s1[i + 1] == c || s1[i + 1] == '\0'))
		{
			j++;
		}
		i++;
	}
	if (j == 0)
		j = 1;
	return (j);
}

static void	*def(char **temp, int i)
{
	int n;

	n = 0;
	while (i >= n)
	{
		free(temp[n]);
		*temp = NULL;
		n++;
	}
	free(temp);
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		a;
	char	**temp;

	a = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(temp = (char**)malloc(sizeof(char*) * counter((char *)s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			if (!(temp[a] = ft_strsub((char *)s, i, ft_len((char *)s + i, c))))
				return (def(temp, a));
			a++;
			i = i + (ft_len((char *)s + i, c));
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	temp[a] = NULL;
	return (temp);
}
