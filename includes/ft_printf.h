/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:43:28 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/25 18:01:28 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DEC "0123456789"
# define HEX_MINUS "0123456789abcdef"
# define HEX_MAYUS "0123456789ABCDEF"

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_base(char *base, long n);

#endif