/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:14:53 by haalouan          #+#    #+#             */
/*   Updated: 2024/03/06 15:15:02 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_world(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	ft_len_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static void	f_free(char **str, int le)
{
	int	i;

	i = 0;
	while (i < le)
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}

static char	**ft_cpy(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	lenword;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		lenword = ft_len_word(s + i, c);
		str[j] = ft_substr(s, i, lenword);
		if (str[j] == NULL)
		{
			f_free(str, j);
			return (NULL);
		}
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_world(s, c) + 1));
	if (res == NULL)
		return (NULL);
	res = ft_cpy(res, s, c);
	return (res);
}
