/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:28:58 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/14 14:30:35 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	char	*p;
	int		i;

	p = s;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
}