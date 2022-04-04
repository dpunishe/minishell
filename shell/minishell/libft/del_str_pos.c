/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_str_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:45:55 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:55:48 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*del_str_pos(char *str, int n)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	aux = malloc(ft_strlen(str));
	while (str[i])
	{
		if (i == n)
			i++;
		aux[j] = str[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	return (aux);
}
