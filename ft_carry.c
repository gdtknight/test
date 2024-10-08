/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carry.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:49:52 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/08 20:49:59 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_carry(char *buf, int *idx)
{
	int	cur;

	cur = MAX_LEN - 2;
	while ((buf[cur] - '0') + 1 == 10)
		buf[cur--] = '0';
	if (cur == *idx)
		buf[(*idx)--] = '1';
	else
		buf[cur] += 1;
	buf[(*idx)--] = '-';
}
