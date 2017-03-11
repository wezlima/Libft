/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 19:38:34 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 14:18:45 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		strlen;
	char	*strdup;

	i = 0;
	strlen = ft_strlen((char*)str);
	strdup = (char *)malloc((strlen + 1) * sizeof(*str));
	if (strdup == NULL)
		return (NULL);
	strdup[strlen + 1] = '\0';
	while (i <= strlen)
	{
		strdup[i] = str[i];
		i++;
	}
	return (strdup);
}
