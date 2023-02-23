/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:57:13 by ounal             #+#    #+#             */
/*   Updated: 2023/02/23 15:17:49 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
