/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:36:15 by hrochd            #+#    #+#             */
/*   Updated: 2023/11/25 00:08:34 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits_counter(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		count++;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = digits_counter(n);
	result = malloc((sizeof(char) * digits) + 1);
	if (!result)
		return (NULL);
	result[digits] = '\0';
	digits--;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[digits] = (n % 10) + 48;
		n = n / 10;
		digits--;
	}
	return (result);
}
