/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:25:55 by anggonza          #+#    #+#             */
/*   Updated: 2021/10/28 16:12:51 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	char	*str;
	int		i;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = malloc(size_s1 + size_s2 + 1);
	if (!str)
		return (NULL);
	while (i <= size_s1 + size_s2)
	{
		if (i < size_s1)
		{
			str[i] = *s1++;
		}
		else
		{
			str[i] = *s2++;
		}
		i++;
	}
	str[i] = 0;
	return (str);
}
