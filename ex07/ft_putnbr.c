/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:26 by yabdoul           #+#    #+#             */
/*   Updated: 2023/09/14 19:17:05 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putnbr(int nb)
{  
	if(nb == -2147483648 )
	{
		write(1,"2147483648",12);
	}
	else if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if(nb<10)
	{
		nb += 48;
		write(1,&nb,1);
	}
	else
	{
	ft_putnbr(nb/10) ;
	ft_putnbr(nb%10) ;
	}
}

int main()
{
ft_putnbr(45544);
return(0);
}
