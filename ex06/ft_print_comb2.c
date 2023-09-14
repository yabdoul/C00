/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:25:10 by yabdoul           #+#    #+#             */
/*   Updated: 2023/09/14 15:16:13 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_number(int n)
{
	int	fd;
	int	sd;

	sd = n % 10 + '0';
	fd = n / 10 + '0';
	write(1, &fd, 1);
	write(1, &sd, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
	b = a + 1 ;
		while (b <= 99)
		{
			put_number(a);
			write(1, " ", 1);
			put_number(b);
			if (a != 98)
			{
				write(1, ", ", 1);
			}
			b++;
		}
		a++;
	}
}
