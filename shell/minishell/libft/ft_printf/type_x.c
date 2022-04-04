/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:45:37 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:55:42 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(t_print *tab, int i)
{
	int				len;
	unsigned int	digit;
	char			*str;

	digit = va_arg(tab->args, int);
	str = check_number(digit, i);
	len = ft_strlen(str);
	if (digit == 0 && tab->preci == 0 && tab->width == 1)
		len = 0;
	update_tab_diux(tab, len);
	len_width_nopreci(tab, str, len, digit);
	width_len_nopreci(tab, str, len, digit);
	preci_no_width(tab, str, len, digit);
	preci_and_width(tab, str, len, digit);
	free(str);
}
