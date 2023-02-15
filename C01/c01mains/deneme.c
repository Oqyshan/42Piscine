/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:18:35 by ounal             #+#    #+#             */
/*   Updated: 2023/02/15 11:22:54 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int a;
	int b;
	int *ptra;
	int *ptrb;
	a = 5;
	b = 9;
	ptra = &a;
	ptrb = &b;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%u\n", ptra);
	printf("%u\n", ptrb);
	printf("%d\n", *ptra);
	printf("%d\n", *ptrb);
}
