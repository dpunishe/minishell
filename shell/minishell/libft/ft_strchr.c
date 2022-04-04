/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:48:51 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:56:58 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		x;
	int		len;

	x = 0;
	len = ft_strlen(s);
	while (x < len + 1)
	{
		if (s[x] == (char)c)
			return ((char *)s + x);
		x++;
	}
	return (NULL);
}
