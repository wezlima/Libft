/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 22:58:30 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/06 18:05:05 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	ldst;

	i = 0;
	n = size;
	while (dst[i] && n-- != 0)
		i++;
	ldst = &dst[i] - dst;
	n = size - ldst;
	if (n == 0)
		return (ldst + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (n != 1)
		{
			dst[i++] = src[j];
			n--;
		}
		j++;
	}
	dst[i] = '\0';
	return (ldst + (&src[j] - src));
}
