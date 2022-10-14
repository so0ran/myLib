/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:49:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/14 21:25:57 by belkarto         ###   ########.fr       */
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
	ft_memset(ptr, 0, count * size);
	return ((void *)ptr);
}
