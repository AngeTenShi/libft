/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:33:49 by anggonza          #+#    #+#             */
/*   Updated: 2021/08/09 17:49:03 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chara;
	int				i;

	chara = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (*str && i < n)
	{
		if (*str == chara)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
