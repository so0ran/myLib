/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:43:32 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/06 15:49:11 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;
	int		i;

	i = 0;
	found = NULL;
	while (s[i])
	{
		if (s[i] == c)
			found = (char *)&s[i];
		i++;
	}
	return (found);
}
