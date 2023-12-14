/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-monn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:09:51 by tle-monn          #+#    #+#             */
/*   Updated: 2023/10/23 18:09:53 by tle-monn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_put_hex(unsigned int num, const char format);
void	ft_put_ptr(unsigned long num);

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_print_unsigned(unsigned int n);
int		ft_num_len(unsigned	int num);
int		ft_hex_len(unsigned	int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_ptr_len(unsigned long num);
int		ft_print_ptr(unsigned long ptr);
int		ft_getformat(va_list args, const char format);

char	*ft_uitoa(unsigned int n);

#endif
