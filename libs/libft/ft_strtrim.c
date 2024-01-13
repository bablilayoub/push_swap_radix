/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:38:15 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:06:08 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_array(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && c != str[i])
		i++;
	return (str[i] == c);
}

char	*ft_strtrim(char const *src, char const *set)
{
	size_t	start;
	size_t	end;

	if (!src)
		return (NULL);
	if (!set)
		return (ft_strdup(src));
	start = 0;
	end = ft_strlen(src);
	start = 0;
	while (src[start] && in_array(set, src[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (in_array(set, src[end - 1]))
		end--;
	return (ft_substr(src, start, end - start));
}
