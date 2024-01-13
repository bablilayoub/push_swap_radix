/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rule.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:42:45 by abablil           #+#    #+#             */
/*   Updated: 2023/11/28 15:56:11 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_rule(va_list args, char const *rules, char rule_type, int *i)
{
	int	total;

	total = 0;
	if (rule_type == 'c')
		total += ft_print_char(va_arg(args, int));
	else if (rule_type == 's')
		total += ft_print_str(va_arg(args, char *));
	else if (rule_type == 'p')
		total += ft_print_ptr(va_arg(args, unsigned long long));
	else if (rule_type == 'd' || rule_type == 'i')
		total += ft_print_decimal(va_arg(args, int));
	else if (rule_type == 'u')
		total += ft_print_u_demical(va_arg(args, unsigned int));
	else if (rule_type == '%')
		total += ft_print_char('%');
	else if (rule_type == 'x')
		total += ft_print_hex(va_arg(args, unsigned int), 'x');
	else if (rule_type == 'X')
		total += ft_print_hex(va_arg(args, unsigned int), 'X');
	else if (!rule_type && rules[*i] != '%' && rules[*i] != '\0')
		total += ft_print_char(rules[*i]);
	return (total);
}
