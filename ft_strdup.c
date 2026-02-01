/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:00:01 by mhoumman          #+#    #+#             */
/*   Updated: 2025/11/02 14:50:15 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*d;

	i = 0;
	d = malloc (ft_strlen(str) + 1);
	if (!d)
		return (NULL);
	while (str[i])
	{
		d[i] = str[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
