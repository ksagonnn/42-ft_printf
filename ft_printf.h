#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printf_args(va_list *args, char c);
int	ft_printf_char(char c);
int	ft_printf_num(int nb);
int	ft_printf_hex(unsigned int nb, int maj);
int	ft_printf_ptr(unsigned long int nb);
int	ft_printf_unum(unsigned int nb);
int	ft_printf_str(char *str);

#endif