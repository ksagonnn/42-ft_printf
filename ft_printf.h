/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <ksagon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:33:47 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/25 21:42:13 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "./libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *input, ...);
int	ft_print_char(int c, int *rcount);
int	ft_printf_int(int nbr, int *rcount);
//int	ft_printf_dun(int *rcount);
int	ft_printf_str(char *str, int *rcount);
int	ft_printf_hex(unsigned long nb, int  *rcount);
int	ft_printf_ptr(void *ptr, int *rcount);

#endif
