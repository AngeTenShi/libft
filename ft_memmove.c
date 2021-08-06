/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:29:58 by anggonza          #+#    #+#             */
/*   Updated: 2021/08/06 18:33:40 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;
	unsigned char	*tmp;
	size_t			i;

	dst = (unsigned char *)dest;
	source = (unsigned char *)source;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (source[i])
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst[i] = tmp[i];
		i++;
	}
	return (dest);
}
