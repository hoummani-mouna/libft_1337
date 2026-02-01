/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:41:21 by mhoumman          #+#    #+#             */
/*   Updated: 2025/11/02 10:57:40 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*tmp;

	if (size != 0 && (nelem * size) / size != nelem)
		return (NULL);
	tmp = malloc(nelem * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, nelem * size);
	return (tmp);
}
