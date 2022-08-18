/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:03:36 by sangwoha          #+#    #+#             */
/*   Updated: 2022/08/18 12:04:00 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		print_char(char ch);
int		print_str(char *str);
int		print_hex(unsigned long long num, int upper);
int		print_nbr(int nbr);
int		print_ui(unsigned int nbr);
size_t	ft_strlen(const char *s);
int		recursive_nbr(int n);
int		recursive_unsigned_nbr(unsigned int n);
#endif
