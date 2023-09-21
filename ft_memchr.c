/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:11:42 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/02 15:14:16 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*t;
	size_t	i;

	t = (char *)s;
	i = 0;
	if (!s && !n)
		return (NULL);
	while (i < n)
	{
		if (t[i] == (char)c)
			return (t + i);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char s[] = "aaasaaa qewrtj";
// 	int c = 1 + 2560000;
// 	// char *a = &c;
// 	// printf("a = %c\n", *a);
// 	// printBits(c);
// 	// printf("%d\n", (unsigned char)-1);
// 	// printf("%s\n", ft_memchr(s, c, 3));
// 	// printf("%s", memchr(s, c, 3));
// }