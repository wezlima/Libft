/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 20:11:04 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/17 13:15:19 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*new_list;

	if ((new_list = (t_list *)malloc(sizeof(*new_list))) == NULL)
		return (NULL);
	new_list->next = NULL;
	if (content != NULL && content_size != 0)
	{
		if ((new_list->content = malloc(sizeof(*new_list))) == NULL)
			return (NULL);
		ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
	}
	else
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	return (new_list);
}
