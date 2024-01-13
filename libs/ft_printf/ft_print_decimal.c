/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:08:36 by abablil           #+#    #+#             */
/*   Updated: 2023/11/22 18:41:59 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(int n)
{
	int	count;

	count = (n == 0);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_print_decimal(int n)
{
	int	digits;
	int	total;

	total = 0;
	if (n == -2147483648)
		return (ft_print_str("-2147483648"));
	if (n < 0)
	{
		n = -n;
		total += ft_print_char('-');
	}
	digits = count_digits(n);
	total += digits;
	if (n >= 10)
		ft_print_decimal(n / 10);
	ft_print_char(n % 10 + '0');
	return (total);
}
