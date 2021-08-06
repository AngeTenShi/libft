/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:52:29 by anggonza          #+#    #+#             */
/*   Updated: 2021/08/06 18:17:39 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char	*dst = (unsigned char *)dest;
	unsigned char	*source = (unsigned char *)src;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while(i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return(dest);
}
