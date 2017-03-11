/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:40:31 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 11:45:29 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char*)dst)[counter] = ((unsigned char*)src)[counter];
		if (((unsigned char*)src)[counter] == (unsigned char)c)
			return (&(((unsigned char*)dst)[counter + 1]));
		counter++;
	}
	return (NULL);
}
