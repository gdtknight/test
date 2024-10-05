/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:46:36 by yoshin            #+#    #+#             */
/*   Updated: 2024/10/06 01:50:37 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	flag;
	int	result;

	flag = 0;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			flag = 1;
	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += (*nptr++) - '0';
	}
	if (flag)
		return ((result) * (-1));
	return (result);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\v' || c == '\t' || c == '\r')
		return (1);
	return (0);
}
