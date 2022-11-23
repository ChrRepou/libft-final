/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:12:17 by crepou            #+#    #+#             */
/*   Updated: 2022/11/19 17:03:41 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*p;

	p = malloc(nitems * size);
	if (p == NULL)
		return (NULL);
	p = ft_memset(p, 0, (nitems * size));
	return (p);
}