/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:08:37 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 12:11:24 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_str1;
	unsigned char	*new_str2;

	i = 0;
	new_str1 = (unsigned char *)s1;
	new_str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (new_str1[i] != new_str2[i])
			return ((new_str1[i] - new_str2[i]));
		i++;
	}
	return (0);
}
