/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 20:38:20 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/19 20:13:15 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_len(int n)
{
	size_t	len;
	long	number;

	len = 1;
	number = (long)n;
	if (number < 0)
	{
		len++;
		number = -number;
	}
	while (number >= 10)
	{
		len++;
		number /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	number;

	len = ft_len(n);
	number = (long)n;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (len > 0)
	{
		str[len] = number % 10 + '0';
		number = number / 10;
		len--;
	}
	if (n >= 0)
		str[len] = number + '0';
	return (str);
}
