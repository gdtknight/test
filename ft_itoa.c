/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:54:33 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/08 20:52:48 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		idx;
	int		flag;
	char	buf[MAX_LEN];

	idx = MAX_LEN - 1;
	buf[idx--] = '\0';
	flag = 0;
	if (n == 0)
		buf[idx--] = '0';
	if (n < 0)
	{
		flag = 1;
		n = (n + 1) * (-1);
	}
	while (n > 0)
	{
		buf[idx--] = (n % 10) + '0';
		n /= 10;
	}
	if (flag)
		ft_carry(buf, &idx);
	return (ft_strdup(&buf[++idx]));
}
