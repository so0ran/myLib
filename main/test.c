/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:59:35 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/07 13:52:52 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
   char str[] = "brahim elkartouch yoo";
   char str2[] = "brahim elkartouch yoo";
   ft_memset(str,'$',7);
   printf("%s\n", str);
   memset(str2,'$',7);
   printf("%s", str2);


   return(0);
}
