/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 00:35:44 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/13 15:24:06 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*src;
	char		*dst;
	size_t		i;

	src = (char *)s;
	if (src && f)
	{
		dst = ft_strnew(ft_strlen(s));
		if (dst == NULL)
			return (NULL);
		i = 0;
		while (src[i] != '\0')
		{
			dst[i] = (*f)(i, src[i]);
			i++;
		}
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
