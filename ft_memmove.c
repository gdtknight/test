/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:20:48 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/07 22:37:58 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	size_t	len;
	char	*temp;
	char	*t;

	temp = (char *)malloc(sizeof(char) * n);
	if (temp == NULL)
		return (NULL);
	t = temp;
	len = n;
	while (len--)
		*t++ = *(char *)src++;
	len = n;
	t = temp;
	d = dest;
	while (len--)
		*(char *)d++ = *t++;
	return (dest);
}
