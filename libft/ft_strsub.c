/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:05:47 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 01:55:27 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str1;
	char		*str2;
	size_t		i;

	str1 = (char *)s;
	str2 = (char *)(malloc((len + 1) * sizeof(char)));
	i = 0;
	if (str1 && str2)
	{
		while (i < len)
		{
			str2[i] = str1[start];
			i++;
			start++;
		}
		str2[i] = '\0';
	}
	return (str2);
}
