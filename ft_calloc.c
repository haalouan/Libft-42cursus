/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:19:40 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/18 21:07:04 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totale;
	void	*str;
	char	*tmp;
	size_t	i;

	i = 0;
	totale = size * count;
	str = malloc(totale);
	if (str == NULL)
		return (NULL);
	tmp = (char *)str;
	while (i < totale)
	{
		tmp[i] = 0;
		i++;
	}
	return (str);
}
