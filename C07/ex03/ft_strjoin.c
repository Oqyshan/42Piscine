/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:12:18 by ounal             #+#    #+#             */
/*   Updated: 2023/02/26 13:13:17 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_fullleng(int size, char **strs, char *sep)
{
	int	i;
	int	x;
	int	c;

	c = 0;
	x = 0;
	while (x < size)
	{
		i = 0;
		while (strs[x][i])
		{
			c++;
			i++;
		}
		x++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (c + 1 + ((size -1) * i));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*str;

	x = 0;
	j = 0;
	if (!size)
		return ((char *) malloc(sizeof(char)));
	str = malloc(sizeof(char) * ft_fullleng(size, strs, sep));
	while (x < size)
	{
		i = 0;
		while (strs[x][i])
			str[j++] = strs[x][i++];
		i = 0;
		while (sep[i] && x < size -1)
			str[j++] = sep [i++];
		x++;
	}
	str[j] = '\0';
	return (str);
}
