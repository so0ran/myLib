/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:03:25 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/06 17:34:44 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] > s2[i])
			diff = 1;
		else if (s1[i] < s2[i])
			diff = -1;
		else
			diff = 0;
		i++;
	}
	return (diff);
}
