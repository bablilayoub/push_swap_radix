/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:48:33 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:04:55 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (new_dest < new_src)
	{
		i = 0;
		while (i < len)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	else if (new_dest > new_src)
	{
		while (len--)
		{
			new_dest[len] = new_src[len];
		}
	}
	return (dst);
}
