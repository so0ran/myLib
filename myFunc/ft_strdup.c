/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:01:33 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/09 10:22:25 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) malloc(ft_strlen(s1) * sizeof(char) + 1);
	while (i <= ft_strlen(s1))
	{
		str[i] = '\0';
		i++;
	}
	ft_memcpy(str, s1, ft_strlen(s1));
	return (str);
}
