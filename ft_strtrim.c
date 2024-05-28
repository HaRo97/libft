/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:47:31 by hrochd            #+#    #+#             */
/*   Updated: 2023/11/25 01:00:34 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_inset(const char *set, char ch)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*p;
	size_t	plen;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_inset(set, s1[start]))
		start++;
	while (end > start && ft_is_inset(set, s1[end - 1]))
		end--;
	plen = end - start;
	p = (char *)malloc(plen + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < plen)
		p[i++] = s1[start++];
	p[plen] = '\0';
	return (p);
}
