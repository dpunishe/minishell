/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_matrix_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:45:50 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:55:46 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**del_matrix_pos(char **matrix, int pos)
{
	int		i;
	int		j;
	char	**aux;

	i = 0;
	j = 0;
	aux = malloc(matrix_len(matrix));
	while (matrix[i])
	{
		if (i == pos)
			i++;
		aux[j] = matrix[i];
		i++;
		j++;
	}
	aux[j] = NULL;
	return (aux);
}
