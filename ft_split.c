/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:48:31 by mhoumman          #+#    #+#             */
/*   Updated: 2025/10/28 17:02:37 by mhoumman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int		count;
	int		x;
	int		i;

	i = 0;
	count = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (str[i] == c)
			x = 0;
		i++;
	}
	return (count);
}

static char	*create_word(const char *s, char c)
{
	int		i;
	char	*d;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	d = malloc(i + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

static int	fill_result(char **result, const char *s, char c)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = create_word(&s[i], c);
			if (!result[j])
				return (j);
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (-1);
}

static void	ft_free(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		error_index;

	if (!s)
		return (NULL);
	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	error_index = fill_result(result, s, c);
	if (error_index != -1)
	{
		ft_free(result, error_index - 1);
		return (NULL);
	}
	return (result);
}
