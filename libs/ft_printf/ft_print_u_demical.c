/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_demical.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:28 by abablil           #+#    #+#             */
/*   Updated: 2023/11/22 17:15:48 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_u_decimal(unsigned int n, int *total)
{
	if (n >= 10)
		handle_u_decimal(n / 10, total);
	*(total) += ft_print_char(n % 10 + '0');
}

int	ft_print_u_demical(unsigned int n)
{
	int	total;

	total = 0;
	handle_u_decimal(n, &total);
	return (total);
}
