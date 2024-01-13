/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:32:00 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 21:45:46 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digits;

	digits = (n == 0);
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		total_digits;
	char	*result;

	sign = (n < 0);
	total_digits = count_digits(n) + sign;
	result = (char *)malloc(sizeof(char) * (total_digits + 1));
	if (!result)
		return (NULL);
	result[total_digits] = '\0';
	if (sign)
	{
		result[0] = '-';
		result[--total_digits] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (total_digits-- > sign)
	{
		result[total_digits] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
