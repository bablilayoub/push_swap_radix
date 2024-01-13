/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:43:44 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:04:47 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	i = 0;
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	while (i < n && new_dst != new_src)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (dst);
}
