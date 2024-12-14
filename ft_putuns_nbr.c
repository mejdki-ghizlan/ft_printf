/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:48:19 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/12/13 23:48:30 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_count(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_putuns_nbr(unsigned long n)
{
	int	count;

	count = size_count(n);
	if (n >= 10)
	{
		ft_putuns_nbr(n / 10);
		ft_putuns_nbr(n % 10);
	}
	else
		ft_putchar(n + 48);
	return (count);
}
