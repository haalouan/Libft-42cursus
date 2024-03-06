/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:52:55 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/12 13:10:22 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenneedle;
	size_t	i;
	size_t	j;

	lenneedle = ft_strlen(needle);
	if (lenneedle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (needle[0] == haystack[i])
		{
			j = 1;
			while (j < lenneedle && i + j < len && needle[j] == haystack[i + j])
			{
				j++;
			}
			if (j == lenneedle)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
