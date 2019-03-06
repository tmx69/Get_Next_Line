/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:09:39 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/20 13:11:19 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>

static void		addtohead(t_line **alst, t_line *new)
{
	t_line *buf;

	buf = *alst;
	(*alst) = new;
	(*alst)->next = buf;
}

static t_line	*fd_find(int fd, t_line **buf)
{
	t_line *buf1;
	t_line *temp;

	if (buf == NULL)
	{
		(*buf) = (t_line*)malloc(sizeof(t_line));
		(*buf)->fdd = fd;
		(*buf)->array = ft_strnew(0);
		return (*buf);
	}
	temp = *buf;
	while (temp)
	{
		if (fd == temp->fdd)
		{
			return (temp);
		}
		temp = temp->next;
	}
	buf1 = (t_line*)malloc(sizeof(t_line));
	buf1->fdd = fd;
	buf1->array = ft_strnew(0);
	addtohead(buf, buf1);
	return (buf1);
}

static int		ft_linen(char **line, t_line *tmp)
{
	int		i;
	char	*t;

	i = 0;
	if (tmp->array == NULL || tmp->array[i] == '\0')
		return (0);
	while (tmp->array[i] != '\n' && tmp->array[i] != '\0')
	{
		if (tmp->array[i + 1] == '\0')
		{
			t = tmp->array;
			i++;
			*line = ft_strsub(tmp->array, 0, i);
			i++;
			tmp->array = NULL;
			free(t);
			return (1);
		}
		i++;
	}
	t = tmp->array;
	*line = ft_strsub(tmp->array, 0, i);
	tmp->array = ft_strsub(tmp->array, i + 1, (ft_strlen(tmp->array) - 1));
	free(t);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static t_line	*node;
	t_line			*tmp;
	int				ret;
	char			temp[BUFF_SIZE + 1];
	char			*t;

	if (fd < 0 || !line)
		return (-1);
	tmp = fd_find(fd, &node);
	while ((ret = read(fd, temp, BUFF_SIZE)) > 0)
	{
		t = tmp->array;
		temp[ret] = '\0';
		tmp->array = ft_strjoin(tmp->array, temp);
		free(t);
		if (ft_strchr(tmp->array, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	return (ft_linen(line, tmp));
}
