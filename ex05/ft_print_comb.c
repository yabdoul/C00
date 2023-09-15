/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:49:04 by yabdoul           #+#    #+#             */
/*   Updated: 2023/09/14 14:05:58 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, & a, 1);
				write(1, & b, 1);
				write(1, & c, 1);
				if(a != '7')
				{write(1,", ",2);				
				}
				c++;
			}
			b++;
		}
		a = a + 1;
	}
}
