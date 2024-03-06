/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:13:38 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/18 21:22:43 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;

	ls = ft_strlen(src);
	if (size == 0)
		return (ls);
	i = 0;
	ld = ft_strlen(dest);
	if (size == 0)
		return (ls);
	if (size <= ld)
		return (size + ls);
	while (src[i] != '\0' && ld + i < size - 1)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}
