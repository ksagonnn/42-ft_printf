/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:37:21 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/26 15:50:47 by ksagon           ###   ########.fr       */
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
int	ft_printf_int(int *rcount);
int	ft_printf_dun(int *rcount);
int	ft_printf_percent(int *rcount);
int	ft_printf_hex(int *rcount);
int	ft_printf_ptr(int *rcount);

#endif
