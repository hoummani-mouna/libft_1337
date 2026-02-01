/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:15:10 by mhoumman          #+#    #+#             */
/*   Updated: 2025/10/19 10:59:21 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	fill_nbr(char *d, long nbr, int i)
{
	while (nbr)
	{
		d[--i] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*d;

	i = count_nbr(n);
	nbr = n;
	d = malloc(i + 1);
	if (!d)
		return (NULL);
	d[i] = '\0';
	if (nbr == 0)
		d[0] = '0';
	if (nbr < 0)
	{
		d[0] = '-';
		nbr *= -1;
	}
	fill_nbr(d, nbr, i);
	return (d);
}
