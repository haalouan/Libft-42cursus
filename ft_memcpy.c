/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:07:09 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/20 15:06:21 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*sr;
	char		*ds;
	size_t		i;

	ds = (char *)dst;
	sr = (char *)src;
	if (ds == NULL && sr == NULL)
		return (0);
	i = 0;
	while (n > 0)
	{
		*ds = *sr;
		ds++;
		sr++;
		n--;
	}
	return (dst);
}
