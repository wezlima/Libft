/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 20:49:01 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 14:18:04 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]
		&& ((unsigned char*)s1)[i] != '\0' && ((unsigned char*)s2)[i] != '\0')
		i++;
	return ((((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]));
}
