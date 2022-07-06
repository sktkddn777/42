/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:55:56 by sangwoha          #+#    #+#             */
/*   Updated: 2022/05/13 13:55:59 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char    *read_file(int fd, char *st_variable)
{
    char    *buff;
    char    *tmp;
    ssize_t read_size;

    buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buff)
        return (0);
    
    read_size = read(fd, buff, BUFFER_SIZE);
    while (read_size > 0)
    {
        buff[read_size] = '\0'
        tmp = st_variable;
        st_variable = ft_strjoin(tmp, buff)
        free(tmp);
        if (ft_strchr(st_variable, '\n') || !st_variable)
            break ;
        read_size = read(fd, buff, BUFFER_SIZE);
    }
    free(buff);
    if (read_size < 0)
        return (0);
    return (st_variable);
}

char	*get_next_line(int fd)
{
    static char *st_variable

    if (fd < 0 || BUFFER_SIZE < 1)
        return (0);
    
    st_variable = read_file(fd, st_variable);
    if (!st_variable)
        return (0);

    
}
