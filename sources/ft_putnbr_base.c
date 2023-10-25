/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:57:22 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/25 18:07:59 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putnbr_base(char *base, long n)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (n < 0)
	{
		i += ft_putchar('-');
		n = n * -1;
	}
	if (n > (len - 1))
		i += ft_putnbr_base(base, n / len);
	i += write (1, &base[n % len], 1);
	return (i);
}
