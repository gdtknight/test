/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:08:28 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/02 18:56:10 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ls;

	ls = (char *)s;
	while (*ls)
		ls++;
	while (s != ls)
		if (*ls-- == c)
			return (++ls);
	if (*ls == c)
		return (ls);
	return (NULL);
}
