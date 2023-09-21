/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:26:04 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 18:18:09 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (i + 1 < dstsize && (char)src[i])
		{
			dst[i] = (char)src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

// int	main()
// {
// 	char dst[5] = "";
// 	const char *src = "aaaaa";
// 	// char a[2] = "";
// 	// const char b[] = "aa";
// 	//strlcpy( dst, src, 5 );
// 	//printf("%s", dst);
// 	printf("%lu\n", strlcpy(dst, src, 5));
// 	printf("%s\n", dst);
// 	// printf("%lu\n", ft_strlcpy(a, b, 5));
// 	// printf("%s", a);
// }