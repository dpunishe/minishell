/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:50:38 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:57:50 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**matrix_dup(char **matrix)
{
	char	**out;
	int		size;
	int		i;

	i = 0;
	size = matrix_len(matrix);
	out = malloc(sizeof(char *) * (size + 1));
	if (!out)
		return (NULL);
	while (matrix[i])
	{
		out[i] = ft_strdup(matrix[i]);
		if (!out[i])
		{
			free_matrix(out);
			return (NULL);
		}
		i++;
	}
	out[i] = NULL;
	return (out);
}
