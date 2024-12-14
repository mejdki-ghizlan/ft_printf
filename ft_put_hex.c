/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 00:09:15 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/12/14 20:54:46 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int size_count(long nb)
// {
//     int i;

//     i = 0;
//     if (nb == 0)
//         return (1);
//     while (nb > 0)
//     {
//         nb = nb / 10;
//         i++;
//     }
//     return (i);
// }

int	ft_put_hex(unsigned long nb, char c)
{
	char	*hex;
	int		count;

	count = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	if (nb > 15)
	{
		count += ft_put_hex((nb / 16), c);
		count += ft_put_hex((nb % 16), c);
	}
	else
		count += ft_putchar(hex[nb]);
	return (count);
}
