/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:00:13 by mhoumman          #+#    #+#             */
/*   Updated: 2025/10/21 11:36:45 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(char const *s1, char const *set)
{
	int		start;
	int		j;
	int		found;

	start = 0;
	while (s1[start])
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[start] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found != 1)
			break ;
		start++;
	}
	return (start);
}

static size_t	find_end(char const *s1, char const *set, size_t start)
{
	size_t	end;
	int		found;
	int		j;

	end = ft_strlen(s1) - 1;
	while (end > start)
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[end] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	int		i;
	char	*d;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	end = find_end(s1, set, start);
	d = malloc (end - start +2);
	if (!d)
		return (NULL);
	while (start <= end)
	{
		d[i++] = s1[start++];
	}
	d[i] = '\0';
	return (d);
}
