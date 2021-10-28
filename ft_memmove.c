/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:29:58 by anggonza          #+#    #+#             */
/*   Updated: 2021/10/23 18:34:18 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (src == dest)
		return (dest);
	else if (src < dest)
	{
		i = n;
		while (i-- > 0)
			*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
	}
	else
	{
		while (++i < n)
			*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
	}
	return (dest);
}
