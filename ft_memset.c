/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:58:34 by hrochd            #+#    #+#             */
/*   Updated: 2023/12/01 23:51:51 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	ch;

	i = 0;
	a = (unsigned char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		a[i] = ch;
		i++;
	}
	return (b);
}
