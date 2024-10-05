/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:57:56 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/06 01:46:15 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*addr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	addr = (void *)malloc(size * count);
	if (addr)
		ft_bzero (addr, count * size);
	return (addr);
}
