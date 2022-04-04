/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:44:55 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:55:27 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(t_print *tab, const char *format, int pos)
{
	if (format[pos - 1] == '%' && format[pos + 1] != '-')
		tab->zero = 1;
	if (format[pos - 1] == '.' && tab->preci == -1
		&& !ft_isdigit(format[pos + 1]))
		tab->preci = 0;
}

void	ft_point(t_print *tab, const char *format, int pos)
{
	if (format[pos + 1] != '*')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 's')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 'p')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 'd')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 'i')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 'u')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 'x')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == 'X')
		tab->point = 1;
	else if (format[pos + 1] == '*' && format[pos + 2] == '%')
		tab->point = 1;
}

void	ft_star(t_print *tab, const char *format, int pos)
{
	if (tab->width || tab->point)
	{
		tab->preci = va_arg(tab->args, int);
		if (tab->preci <= 0)
			tab->p_star = 1;
		if (tab->preci < -1)
		{
			if (ft_strchr(PRECISTAR, format[pos + 1]) && format[pos - 1] == '.')
				tab->p_star = 1;
			tab->preci = -1;
		}
	}
	else
		tab->width = va_arg(tab->args, int);
	if (tab->width < 0)
	{
		tab->dash = 1;
		tab->width = -tab->width;
		if (tab->zero)
			tab->zero = 0;
	}
}
