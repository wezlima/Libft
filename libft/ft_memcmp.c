/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:51:56 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 12:03:50 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (int)n)
	{
		if (((unsigned char*)str1)[i] != ((unsigned char*)str2)[i])
			return (((unsigned char*)str1)[i] - ((unsigned char*)str2)[i]);
		i++;
	}
	return (0);
}
