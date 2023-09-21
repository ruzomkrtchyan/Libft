/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:03:08 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/02 15:27:22 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}
// int	main()
// {
// 	char s[] = {-75, 0, 127, 0};
// 	char s2[] = {78, 0, 127, 0};
// 	printf("%d\n", ft_memcmp(s2, s, 1));
// 	printf("%d", memcmp(s2, s, 1));
// }