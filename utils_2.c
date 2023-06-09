/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devoma <devoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:19:05 by devoma            #+#    #+#             */
/*   Updated: 2023/05/18 17:45:54 by devoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 1;
	if (c < 48 || c > 57)
		result = 0;
	return (result);
}

int	ft_isalpha(int c)
{
	int	result;

	result = 1;
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		result = 0;
	return (result);
}

char	*ft_strdup(char	*s1)
{
	char	*s;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s1) + 1;
	s = (char *)malloc(size * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(len * sizeof(char));
	i = 0;
	j = 0;
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
