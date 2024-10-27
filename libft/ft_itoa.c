/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:41:34 by seemil            #+#    #+#             */
/*   Updated: 2023/10/25 11:45:37 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_size(int nb)
{
	int	size;

	size = 0;
	if (nb == -2147483648)
		return (11);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char		*p;
	long long	nb;
	int			str_size;

	nb = n;
	str_size = ft_n_size(nb);
	p = malloc(sizeof(char) * str_size + 1);
	if (!p || p == NULL)
		return (NULL);
	p[str_size] = '\0';
	if (nb == 0)
		p[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		p[0] = '-';
	}
	str_size--;
	while (nb != 0)
	{
		p[str_size] = (nb % 10) + '0';
		str_size--;
		nb = nb / 10;
	}
	return (p);
}
