/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:47:17 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:22 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_substrings(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			if (s[i + 1] == '\0')
				return (count);
			i++;
		}
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	return (count);
}

static char	*get_start(char *s, char c, int i)
{
	if (i == 1)
	{
		while (*s == c && *s)
			s++;
	}
	else
	{
		while (*s != c && *s)
			s++;
	}
	return (s);
}

static size_t	get_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	if (!c)
		return (ft_strlen(s));
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	**free_array(char **tab, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	tab = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**substrings;
	char	*src;
	size_t	substr_len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	substr_len = count_substrings(s, c);
	substrings = (char **)malloc(sizeof(char *) * (substr_len + 1));
	if (!substrings)
		return (NULL);
	src = (char *)s;
	while (*src && i < substr_len)
	{
		if (*src == c)
			src = get_start(src, c, (*src == c));
		substrings[i] = ft_substr(src, 0, get_length(src, c));
		if (substrings[i] == NULL)
			return (free_array(substrings, i));
		src = get_start(src, c, (*src == c));
		i++;
	}
	substrings[i] = (NULL);
	return (substrings);
}
