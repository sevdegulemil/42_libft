/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:18:18 by seemil            #+#    #+#             */
/*   Updated: 2024/10/27 15:58:07 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	if (!src && !dst)
		return (NULL);
	a = (char *)src;
	b = (char *)dst;
	i = 0;
	while (i < n)
	{
		b[i] = (unsigned char)a[i];
		i++;
	}
	return (b);
}
