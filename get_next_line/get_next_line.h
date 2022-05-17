/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:56:16 by sangwoha          #+#    #+#             */
/*   Updated: 2022/05/13 13:56:18 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    int fd;
    char *buff;
    struct s_list *next;
} t_list;

char *get_next_line(int fd);

