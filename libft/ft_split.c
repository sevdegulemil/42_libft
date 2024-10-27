/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:01:56 by seemil            #+#    #+#             */
/*   Updated: 2023/10/27 01:09:39 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i) && *(s + i) != c)
		{
			i++;
			count++;
		}
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	len;
	size_t	i;

	p = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			p[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	p[i] = 0;
	return (p);
}
