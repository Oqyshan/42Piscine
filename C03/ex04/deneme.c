/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:14:53 by ounal             #+#    #+#             */
/*   Updated: 2023/02/18 16:34:27 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dest[j] == '\0')
		return (src);
	while (src[i] != '\0')
	{
		while ((src[i] != '\0' || dest[j] != '\0') && dest[j] == src[i])
		{
			j++;
		}
		i++;	
	}
	return (src + i);
}

int	main()
{
	char d[] = "selamlar";
	char s[] = "ağabeyim selamlar sanada";

	printf("%s", ft_strstr(s, d));
}
