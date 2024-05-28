/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:45:36 by hrochd            #+#    #+#             */
/*   Updated: 2023/11/25 03:05:04 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	if ((count > 0) && ((SIZE_MAX / count) < size))
		return (NULL);
	c = malloc(count * size);
	if (c != NULL)
		ft_memset(c, 0, (count * size));
	return (c);
}
