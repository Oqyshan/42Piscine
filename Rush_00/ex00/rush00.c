/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:42:28 by ounal             #+#    #+#             */
/*   Updated: 2023/02/05 20:04:09 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print(int length, char first_char, char mid_char, char last_char)
{
	int	x_counter;

	x_counter = 1;
	while (x_counter <= length)
	{
		if (x_counter == 1)
			ft_putchar(first_char);
		else if (x_counter == length)
			ft_putchar(last_char);
		else
			ft_putchar(mid_char);
		x_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y_counter;

	y_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (y_counter <= y)
		{
			if (y_counter == 1)
				ft_print(x, 'o', '-', 'o');
			else if (y_counter == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			y_counter++;
		}
	}
}	
