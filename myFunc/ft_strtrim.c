/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:54:49 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/13 14:21:46 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_checker(const char *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	alloc_counter(char const *s1, char const *set)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (s1[i])
	{
		if (ft_checker(set, s1[i]) == 1)
			i++;
		else
		{
			i++;
			counter++;
		}
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)malloc((alloc_counter(s1, set) + 1) * sizeof(char));
	while (s1[i])
	{
		if (ft_checker(set, s1[i]) == 1)
			i++;
		else
			str[j++] = s1[i++];
	}
	str[j] = '\0';
	return (str);
}
