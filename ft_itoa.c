/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:44 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/14 21:08:52 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10 ;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		count;
	char	*result;
	long	x;

	x = n;
	sign = 1;
	count = ft_count(x);
	if (x < 0)
	{
		x = -x;
		sign = -1;
	}
	result = (char *)malloc(count + 1);
	if (result == NULL)
		return (NULL);
	result [count] = '\0';
	while (count > 0)
	{
		result[--count] = x % 10 + '0';
		x = x / 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
