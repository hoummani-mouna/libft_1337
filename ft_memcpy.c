/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:06:14 by mhoumman          #+#    #+#             */
/*   Updated: 2025/11/02 13:13:59 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*p1;
	const unsigned char		*p2;

	p1 = (unsigned char *) dst; 
	p2 = (unsigned char *) src;
	if (dst == src || n == 0)
		return (dst);
	while (n--)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return (dst);
}
