/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:23:39 by anggonza          #+#    #+#             */
/*   Updated: 2021/08/12 00:27:58 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(char *str, char *to_cmp, long n)
{
	long	i;

	i = 0;
	while (i < n)
	{
		if (str[i] != to_cmp[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_is_neg_or_max(char *str, long *i, long *neg)
{
	if (strncmp(str, "2147483647", 10) == 1)
		return (1);
	if (str[0] == '-')
	{
		*i = 1;
		*neg = -1;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	long int	i;
	long int	num;
	long int	neg;

	neg = 1;
	num = 0;
	i = 0;
	if (ft_atoi_is_neg_or_max(str, &i, &neg) == 1)
		return (2147483647);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\b'
			|| str[i] == '\f')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			num = (str[i] - 48) + (num * 10);
		else
			return ((int)num * neg);
		i++;
	}
	return ((int)num * neg);
}
