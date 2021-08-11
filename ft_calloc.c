/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:33:51 by anggonza          #+#    #+#             */
/*   Updated: 2021/08/12 00:39:56 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*return_value;
	int		i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	return_value = malloc(nmemb * size);
	ft_memset(return_value, 0, nmemb * size);
	return (return_value);
}
