/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:13:45 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/20 13:13:50 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/_types.h>
# include <sys/stat.h>
# include <stdlib.h>

typedef struct		s_line
{
	int				fdd;
	char			*array;
	struct s_line	*next;
}					t_line;
int					get_next_line(const int fd, char **line);
#endif
