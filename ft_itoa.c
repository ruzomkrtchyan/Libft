/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:52:18 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/30 16:47:36 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int count)
{
	int	res;

	res = 1;
	while (count - 1)
	{
		res = res * 10;
		count--;
	}
	return (res);
}

char	*other(int n, int i, char *s, int count)
{
	if (n == 0)
	{	
		s[i++] = '0';
	}
	if (n == -2147483648)
	{
		s[i] = '-';
		s[i + 1] = '2';
		n = 147483648;
		i = i + 2;
		count--;
	}
	if (n < 0)
	{
		s[i++] = '-';
		n = -n;
	}
	while (count)
	{
		s[i++] = n / ft_pow(count) + '0';
		n = n % ft_pow(count);
		count--;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	int		tmp;
	char	*s;

	i = 0;
	count = 0;
	tmp = n;
	while (tmp)
	{
		tmp = tmp / 10;
		count ++;
	}
	if (n > 0)
		s = malloc(sizeof(char) * count + 1);
	else
		s = malloc(sizeof(char) * (count + 2));
	if (!s)
		return (NULL);
	s = other(n, i, s, count);
	return (s);
}
// int main() 
// {
//   int n = 2147483647;
//   printf("%s", ft_itoa(n));
//   return 0;
// }
