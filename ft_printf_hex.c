/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:32:33 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/20 13:42:37 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf_hex(unsigned long nb, int *rcount)
{
	nb = 0;
	if nb >= 16
	{
		rcount += ft_printf_hex(nb / 16, rcount);
		rcount += ft_printf_hex(nb % 16, rcount);
		{
			nb < 16
			{
				if nb < 10
				ft_printf_char(nb + 48, rcount)
			}
		else if
			rcount += ft_printf_char(nb + 87 || nb + 55, rcount)
		}
	}
	return (rcount)
}
