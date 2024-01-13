/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:32:14 by abablil           #+#    #+#             */
/*   Updated: 2023/11/27 21:43:30 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_ptr_recursive(unsigned long long ptr, int *total)
{
	if (ptr >= 16)
		handle_ptr_recursive(ptr / 16, total);
	*total += ft_print_char("0123456789abcdef"[ptr % 16]);
}

static void	handle_ptr(unsigned long long ptr, int *total)
{
	*total += ft_print_str("0x");
	if (ptr == 0)
	{
		*total += ft_print_char('0');
		return ;
	}
	handle_ptr_recursive(ptr, total);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	total;

	total = 0;
	handle_ptr(ptr, &total);
	return (total);
}
