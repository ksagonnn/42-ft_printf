/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:32:44 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/26 15:54:20 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// d && i

#include "ft_printf.h"

int	ft_printf_int(int nbr, int *rcount)
{
	char	*ret;

	ret = ft_itoa(nbr);
	ft_putnbr_fd(nbr, 1);
	*rcount += ft_strlen(ret);
	free(ret);
	return (*rcount);
}
