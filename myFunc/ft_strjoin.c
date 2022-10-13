/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:21:06 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/10 14:21:38 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 == 0)
		return (str = ft_strdup(s2));
	else if (len_s2 == 0)
		return (str = ft_strdup(s1));
	else
	{
		str = (char *)malloc((len_s1 + len_s2) * sizeof(char));
		ft_memcpy(str, s1, len_s1);
		ft_memcpy(str + len_s1, s2, len_s2);
		return (str);
	}
}
