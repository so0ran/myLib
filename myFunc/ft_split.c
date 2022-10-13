/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:23:21 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/11 18:20:59 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	alloc_count(const char *str, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			counter++;
			while(str[i] != c && str[i])
				i++;
		}
	}
	return (counter);
}

static int	string_alloc(const char *str, int c)
{
	int	i;

	i = 0;
	while(str[i] != c && str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		counter;
	int		next;
	char	**str;

	k = 0;
	i = 0;
	counter = alloc_count(s, c);
	if (counter == 0)
		return (NULL);
	else
		str = (char **)malloc((counter + 1) * sizeof(char *));
	str[counter + 1] = 0;
	while (k < counter)
	{
		while (s[i] == c)
			i++;
		next = string_alloc(s+i, c);
		str[k] = (char *)ft_calloc(next+1, sizeof(char));
		if (!str[k])
		{
			while(k > 0)
				free(str[k--]);
			free(str);
			return (NULL);
		}
		ft_memcpy(str[k], s+i, next);
		i += next;
		k++;
	}
	return (str);
}
