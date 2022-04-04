/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:49:47 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:57:21 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create a substring from the "start" with
** len length more than start
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		str = malloc(len + 1);
		if (!str)
			return (NULL);
		i = 0;
		while (++i - 1 < len)
			*(str + i - 1) = *(s + start + i - 1);
		*(str + i - 1) = '\0';
		return (str);
	}
}
