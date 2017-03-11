/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 00:34:51 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/19 20:09:46 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f) (char))
{
	char	*fstr;
	size_t	i;

	if (s)
	{
		i = 0;
		fstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (!fstr)
			return (NULL);
		while (i < ft_strlen(s))
		{
			fstr[i] = f(s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}
