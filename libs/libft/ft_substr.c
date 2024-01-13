/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:38:43 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:06:12 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t end)
{
	size_t	i;
	size_t	str_len;
	size_t	substr_len;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	str_len = ft_strlen(s);
	if ((str_len - start) >= end)
		substr_len = end;
	else
		substr_len = str_len - start;
	if (start > str_len)
		substr_len = 0;
	substr = (char *)malloc(sizeof(char) * substr_len + 1);
	if (!substr)
		return (NULL);
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
