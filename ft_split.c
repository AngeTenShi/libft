/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:47:48 by anggonza          #+#    #+#             */
/*   Updated: 2021/10/28 17:15:48 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char *s, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen((const char *)s));
	while (i <= n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	ft_countwords(char *str, char sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] != sep && str[i + 1] == sep)
			result++;
		else if (str[i] != sep && str[i + 1] == '\0')
			result++;
		i++;
	}
	return (result);
}

static char	*ft_strtrunk(char *s, char c)
{
	char	*tmp;

	tmp = malloc(2);
	tmp[0] = c;
	tmp[1] = '0';
	s = ft_strtrim(s, (const char *)tmp);
	free(tmp);
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**result;

	i = 0;
	j = 0;
	index = 0;
	s = ft_strtrunk((char *)s, c);
	result = malloc(ft_countwords((char *)s, c) + 1);
	while (s[i] != '\0' && (index < ft_countwords((char *)s, c)))
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		while (s[j] != c && s[j] != '\0')
			j++;
		result[index] = ft_strndup((char *)(s + i), j - 1);
		i = j + 1;
		index++;
	}
	result[index] = 0;
	return (result);
}
