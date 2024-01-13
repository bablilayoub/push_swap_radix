/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:31:56 by abablil           #+#    #+#             */
/*   Updated: 2023/12/01 15:40:42 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	handle(char const *rules, va_list args)
{
	char	rule_type;
	int		i;
	int		printed_args;

	i = 0;
	printed_args = 0;
	while (rules[i] != '\0' && i <= ft_strlen(rules))
	{
		rule_type = is_rule(rules, &i);
		printed_args += check_rule(args, rules, rule_type, &i);
		i++;
	}
	return (printed_args);
}

int	ft_printf(const char *rules, ...)
{
	int		result;
	va_list	args;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, rules);
	result = handle(rules, args);
	va_end(args);
	return (result);
}
