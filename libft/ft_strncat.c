/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:40:36 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/23 21:53:02 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		destlen;
	int		srclen;
	int		i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char*)src);
	while ((destlen <= (destlen + srclen)) && ((int)n > 0))
	{
		dest[destlen] = src[i];
		destlen++;
		srclen--;
		i++;
		n--;
	}
	dest[destlen] = '\0';
	return (dest);
}
