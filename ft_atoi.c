/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:27:40 by crepou            #+#    #+#             */
/*   Updated: 2022/11/17 17:37:59 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_calc_num(const char *end, int len)
{
	int			num;
	int			mult;

	mult = 1;
	num = 0;
	end--;
	while (len > 0)
	{
		if (*end == '-')
			num *= -1;
		if (ft_isdigit(*end))
		{
			num += mult * (*end - 48);
			mult *= 10;
		}
		len--;
		end--;
	}
	return (num);
}

int	ft_allowed_chars(char c)
{
	if (c == '\n' || c == '\t' || c == '\f')
		return (1);
	if (c == '\v' || c == '\r' || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	const char	*s;
	int			len;
	int			count;

	s = str;
	len = 0;
	count = 0;
	while (*s != '\0')
	{
		if (*s == '-' || *s == '+' || ft_isdigit(*s))
			break ;
		if (!(ft_allowed_chars(*s)))
			return (0);
		count++;
		s++;
	}
	s++;
	len++;
	while (ft_isdigit(*s) && *s != '\0')
	{
		len++;
		s++;
	}
	return (ft_calc_num(s, len));
}
