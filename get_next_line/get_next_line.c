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

char    *get_line(char *st_variable)
{
    char    *line;
    size_t  i;

    i = 0;
    while (st_variable[i] != '\n' && st_variable[i])
        ++i;
    if (st_variable[i] == '\n')
        ++i;
    
    line = (char *)malloc(sizeof(char) * (i+1));
    if (!line)
        return (0);
    
    i = 0;
    while (st_variable[i] != '\n' && st_variable[i])
    {
        line[i] = st_variable[i];
        ++i;
    }
    if (st_variable[i] == '\n')
    {
        line[i] = '\n';
        ++i;
    }
    line[i] = 0; // 뭐야??
    return (line);
}

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
    if (read_size < 0) // read 가 실패하면 -1 반환
        return (0);
    return (st_variable);
}

char	*get_next_line(int fd)
{
    static char *st_variable
    char        *line;
    char        *tmp;

    if (fd < 0 || BUFFER_SIZE < 1)
        return (0);
    
    st_variable = read_file(fd, st_variable);
    if (!st_variable)
        return (0);
    if (!*st_variable) {
        free(st_variable);
        return (0);
    }

    line = get_line(st_variable); // st_variable를 가지고 있음
    if (!line)
    {
        free(line);
        return (0);
    }
    tmp = st_variable;
    st_variable = ft_strdup(tmp + ft_strlen(line)); // st 받을 다음 주소로
    free(tmp);
    if (!st_variable)
        return (0);
    return (line);
}
