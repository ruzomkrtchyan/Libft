/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:34:14 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:05 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	res;

	i = 0;
	res = 0;
	minus = 1;
	if (!str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13 && str[i]) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		else
			minus = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * minus);
}

//  int	main()
// {
// 	char str[] = "     +1a89";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// }
