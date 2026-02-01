/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:53:05 by mhoumman          #+#    #+#             */
/*   Updated: 2025/11/02 15:40:52 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *c, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*c)
		return ((char *) h);
	i = 0;
	while (i < n && h[i])
	{
		j = 0;
		if (h[i] == c[j])
		{
			while (h[i + j] == c[j] && h[i + j] && i + j < n)
				j++;
			if (c[j] == '\0')
				return ((char *) h + i);
		}
		i++;
	}
	return (NULL);
}
