/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:07:23 by abablil           #+#    #+#             */
/*   Updated: 2023/11/24 14:55:30 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_hex(unsigned int n, int *total, char type)
{
	if (n >= 16)
	{
		handle_hex(n / 16, total, type);
		handle_hex(n % 16, total, type);
	}
	else
	{
		if (n <= 9)
			*total += ft_print_char((n + '0'));
		else
		{
			if (type == 'x')
				*total += ft_print_char("0123456789abcdef"[n]);
			else if (type == 'X')
				*total += ft_print_char("0123456789ABCDEF"[n]);
		}
	}
}

int	ft_print_hex(unsigned int x, char type)
{
	int	total;

	total = 0;
	if (x == 0)
		return (ft_print_char('0'));
	handle_hex(x, &total, type);
	return (total);
}
