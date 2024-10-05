/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:22:24 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/02 18:56:25 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- && (*s1 == *s2++))
	{
		if (n == 0 || *s1++ == '\0')
			return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}
