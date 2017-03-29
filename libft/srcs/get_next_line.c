/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 22:09:49 by jcasino           #+#    #+#             */
/*   Updated: 2017/01/18 15:06:39 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** Initializes the static variable store, keeps track of different fds
 */

static t_list	*gnl_saved(t_list **store, int fd)
{
	t_list		*temp;

	temp = *store;
	while (temp)
	{
		if ((int)temp->content_size == fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("\0", fd);
	ft_lstadd(store, temp);
	return (temp);
}

/*
 ** Calls read, sets the last position in buf to \0.  Content grows as buf
 ** is changed.  If \n is found break out of the loop
 */

void			gnl_read(int ret, char *buf, t_list *current, int fd)
{
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		current->content = ft_strjoin(current->content, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
}

/*
 ** finds the location of the new line in src
 */

int				gnl_find_nl(char *src)
{
	int		len;

	len = 0;
	while (src[len] && src[len] != '\n')
		len++;
	return (len);
}

/*
 ** Copies src up to len length into new and returns new
 */

char			*gnl_dupn(const char *src, int len)
{
	char	*new;

	if ((new = ft_strnew(len)) == NULL)
		return (NULL);
	else
		ft_strncpy(new, src, len);
	return (new);
}

/*
 ** This function will check parameters and that read is valid.
 ** It will then save what was read into a t_list current, current->content.
 ** Content will then be saved to temp.  Line will then be temp or
 ** the content of temp until the newline.  If the newline is found,
 ** everything up to that point is stored and content
 ** will then point to the character after the newline.  Then
 ** current will be cleared.
 ** return -1 when there is an error
 ** return 0 when there is nothing to read.
 ** return 1 when there is more to be read.
 */

int				get_next_line(const int fd, char **line)
{
	static t_list				*store;
	t_list						*current;
	char						buf[BUFF_SIZE + 1];
	int							ret;
	char						*temp;

	ret = 0;
	if (fd < 0 || !line || (read(fd, buf, 0) < 0))
		return (-1);
	current = gnl_saved(&store, fd);
	gnl_read(ret, buf, current, fd);
	if (ret < BUFF_SIZE && !ft_strlen(current->content))
	{
		if (*line)
			*line = NULL;
		return (0);
	}
		temp = current->content;
	if (temp[gnl_find_nl(current->content)] == '\n')
		*line = gnl_dupn(temp, gnl_find_nl(temp));
	else
		*line = ft_strdup(current->content);
	if (gnl_find_nl(current->content) < (int)(ft_strlen(current->content)))
		current->content = current->content +
			(gnl_find_nl(current->content) + 1);
	else
		ft_strclr(current->content);
	return (1);
}

