/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:49:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/09 09:44:59 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(count * size);
	if (!ptr || (size == SIZE_MAX && count != 0)
		|| (count == SIZE_MAX && size != 0))
		return (NULL);
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
