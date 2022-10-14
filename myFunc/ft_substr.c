/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:06:56 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/13 14:22:34 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (len < s_len)
		str = (char *)malloc((len + 1) * sizeof(char));
	else
		str = (char *)malloc((s_len + 1) * sizeof(char));
	while (i < len && i + start < s_len && s[i])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
