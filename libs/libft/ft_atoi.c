/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:19:56 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:28:44 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespaces(char const *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

static int	cant_handle(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(char const *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	sign = 1;
	result = 0;
	if (str[0] == '\0' || !str)
		return (result);
	i = ft_whitespaces(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * 10 + (str[i] - '0') > 9223372036854775807)
			return (cant_handle(sign));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)result * sign);
}
