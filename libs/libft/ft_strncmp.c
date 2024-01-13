/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:07:10 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:58 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_str1;
	unsigned char	*new_str2;

	i = 0;
	new_str1 = (unsigned char *)s1;
	new_str2 = (unsigned char *)s2;
	while ((new_str1[i] || new_str2[i]) && i < n)
	{
		if (new_str1[i] != new_str2[i])
			return (new_str1[i] - new_str2[i]);
		i++;
	}
	return (0);
}
