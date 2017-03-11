/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 13:58:07 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 01:50:31 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t		i;
	char		*str1;
	char		*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (str1 && str2)
	{
		while (str1[i] != '\0' && str2[i] != '\0')
		{
			if (str1[i] != str2[i])
				return (0);
			i++;
		}
		if (str1[i] != str2[i])
			return (0);
		return (1);
	}
	return (0);
}
