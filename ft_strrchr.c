/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:25:58 by anggonza          #+#    #+#             */
/*   Updated: 2021/08/09 17:30:36 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*value;
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			value = str;
	}
	if (*s == '\0')
		return (NULL);
	else
		return (value);
}
