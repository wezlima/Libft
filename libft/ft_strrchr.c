/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 13:31:04 by woliveir          #+#    #+#             */
/*   Updated: 2016/09/30 14:46:18 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	if (ft_strchr(src, c) == NULL)
		return (NULL);
	while (*src)
		src++;
	while (*src != c)
		src--;
	return ((char*)src);
}
