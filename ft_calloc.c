/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:33:51 by anggonza          #+#    #+#             */
/*   Updated: 2021/10/23 19:24:43 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*return_value;
	int		i;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (0);
	return_value = malloc(nmemb * size);
	if (!return_value)
		return (NULL);
	ft_bzero(return_value, nmemb * size);
	return (return_value);
}
