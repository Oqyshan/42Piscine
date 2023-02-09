/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:41:16 by ounal             #+#    #+#             */
/*   Updated: 2023/02/09 20:23:11 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	while (i <= 99)
	{
		k = i + 1;
		while (k <= 99)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			if ((i / 10 != 9) || (i % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}
