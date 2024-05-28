/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:47:19 by hrochd            #+#    #+#             */
/*   Updated: 2023/11/25 00:53:08 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	occ;

	i = 0;
	occ = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			occ = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	if (occ != -1)
		return ((char *)s + occ);
	return (NULL);
}
