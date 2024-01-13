/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:07:56 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:04:41 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*new_str;

	new_str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (new_str[i] == (unsigned char)c)
			return ((void *)(new_str + i));
		i++;
	}
	return (NULL);
}
