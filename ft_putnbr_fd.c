/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:00:17 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/08 20:18:58 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
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
	while (buf[++idx])
		write(fd, &buf[idx], 1);
}

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
