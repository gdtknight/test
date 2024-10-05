/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:38:23 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/06 01:44:11 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*dst;
	int		srclen;

	srclen = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (srclen + 1));
	if (d == NULL)
		return (NULL);
	dst = d;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (dst);
}
