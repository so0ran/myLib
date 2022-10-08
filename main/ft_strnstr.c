/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:59:07 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/08 18:26:55 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	while (needle[i] != '\0')
		i++;
	if (i == 0)
		return (str);
	i = 0;
	j = 0;
	while (i < len)
	{
		while (str[i] == needle[j])
		{
			if (needle[j +1] == '\0')
				return (&str[i]);
			j++;
			i++;
		}
		i++;
	}
	return (NULL);
}
